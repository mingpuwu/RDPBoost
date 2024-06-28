cmake_minimum_required(VERSION 3.5)

project(RDPBoost VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")

set(FFMPEG_DLL_DIR "D:/GitCode/RDPBoost/3rdparty/libffmpeg_4_4/lib/x64")
set(FFMPEG_INC_DIR "D:/GitCode/RDPBoost/3rdparty/libffmpeg_4_4/include")

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${FFMPEG_INC_DIR}
    )

file(GLOB_RECURSE PROJECT_SOURCES src/*.cpp src/*.h src/*.ui)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(RDPBoost
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET RDPBoost APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(RDPBoost SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
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
                        ${FFMPEG_DLL_DIR}/swscale.lib)

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
install(TARGETS RDPBoost
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(RDPBoost)
endif()
