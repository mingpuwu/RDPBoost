cmake_minimum_required(VERSION 3.5)

project(RDPBoost VERSION 0.1 LANGUAGES CXX)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(STATUS "Configuring for Debug build")
    add_definitions(-DDEBUG)
endif()

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")

set(FFMPEG_DLL_DIR_6_1 "3rdparty/ffmpeg_6_1_1/lib/")
set(FFMPEG_INC_DIR_6_1 "3rdparty/ffmpeg_6_1_1/include/")

set(FFMPEG_DLL_DIR_4_4 "3rdparty/libffmpeg_4_4/lib/x64/")
set(FFMPEG_INC_DIR_4_4 "3rdparty/libffmpeg_4_4/include/")

set(SPDLOG_INC_DIR "3rdparty/spdlog-1.14.1/include/")

set(FFMPEG_DLL_DIR "${CMAKE_HOME_DIRECTORY}/${FFMPEG_DLL_DIR_4_4}")
set(FFMPEG_INC_DIR "${CMAKE_HOME_DIRECTORY}/${FFMPEG_INC_DIR_4_4}")

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets)

add_subdirectory(3rdparty/spdlog-1.14.1)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${FFMPEG_INC_DIR}
    ${SPDLOG_INC_DIR}
    )

link_directories(${CMAKE_BINARY_DIR}/"3rdparty/spdlog-1.14.1/")

file(GLOB_RECURSE PROJECT_SOURCES src/*.cpp src/*.h src/*.ui)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(RDPBoost
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )

else()
    if(ANDROID)
        add_library(RDPBoost SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(RDPBoost
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(RDPBoost PRIVATE Qt${QT_VERSION_MAJOR}::Widgets 
                        Qt${QT_VERSION_MAJOR}::Multimedia
                        Qt${QT_VERSION_MAJOR}::MultimediaWidgets
                        ws2_32
                        d3d11 dxgi
                        ${FFMPEG_DLL_DIR}/avcodec.lib
                        ${FFMPEG_DLL_DIR}/avformat.lib
                        ${FFMPEG_DLL_DIR}/avutil.lib
                        ${FFMPEG_DLL_DIR}/swscale.lib
                        libspdlogd.a)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.RDPBoost)
endif()
set_target_properties(RDPBoost PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)

message("CMAKE_INSTALL_LIBDIR!!! ${CMAKE_INSTALL_LIBDIR}")

install(TARGETS RDPBoost
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(RDPBoost)
endif()
