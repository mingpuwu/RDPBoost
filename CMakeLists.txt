cmake_minimum_required(VERSION 3.20)

project(RDPBoost VERSION 0.1.5 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

set(FFMPEG_DLL_DIR_4_4 "3rdparty/libffmpeg_4_4/lib/x64/")
set(FFMPEG_INC_DIR_4_4 "3rdparty/libffmpeg_4_4/include/")

set(SPDLOG_INC_DIR "3rdparty/spdlog-1.14.1/include/")

set(FFMPEG_DLL_DIR "${CMAKE_HOME_DIRECTORY}/${FFMPEG_DLL_DIR_4_4}")
set(FFMPEG_INC_DIR "${CMAKE_HOME_DIRECTORY}/${FFMPEG_INC_DIR_4_4}")

set(PROTOBUF_LINK_DIR "${CMAKE_HOME_DIRECTORY}/3rdparty/protobuf_lib/lib")
message("PROTOBUF_LINK_DIR:${PROTOBUF_LINK_DIR}")
link_directories(${PROTOBUF_LINK_DIR})
include_directories("${CMAKE_HOME_DIRECTORY}/3rdparty/protobuf_lib/include")

# #set(GEN_PROTO_DIR "${CMAKE_HOME_DIRECTORY}/Proto")

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message(STATUS "Configuring for Debug build")
    add_definitions(-DDEBUG)
endif()

find_package(Qt6 REQUIRED COMPONENTS Widgets Svg Multimedia MultimediaWidgets)
qt_standard_project_setup()

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${FFMPEG_INC_DIR}
    ${SPDLOG_INC_DIR}
    )

link_directories(${CMAKE_BINARY_DIR}/"3rdparty/spdlog-1.14.1/")

add_subdirectory("3rdparty")
add_subdirectory("FluControls")
add_subdirectory("FluUtils")
add_subdirectory("Proto")
add_subdirectory("RDPCore")
add_subdirectory("RDPBoost")

add_custom_target(resource_copy
    COMMAND ${CMAKE_COMMAND} -E copy_directory_if_different
    ${CMAKE_CURRENT_SOURCE_DIR}/res
    ${PROJECT_BINARY_DIR}/res
    COMMAND ${CMAKE_COMMAND} -E copy_directory_if_different
    ${CMAKE_CURRENT_SOURCE_DIR}/StyleSheet
    ${PROJECT_BINARY_DIR}/StyleSheet
)

target_link_libraries(RDPBoost PRIVATE Qt6::Widgets
                        Qt6::Multimedia
                        Qt6::MultimediaWidgets
                        ws2_32
                        d3d11 dxgi
                        ${FFMPEG_DLL_DIR}/avcodec.lib
                        ${FFMPEG_DLL_DIR}/avformat.lib
                        ${FFMPEG_DLL_DIR}/avutil.lib
                        ${FFMPEG_DLL_DIR}/swscale.lib
                        libspdlogd.a)

install(DIRECTORY res
    DESTINATION .
)

install(DIRECTORY StyleSheet
    DESTINATION .
)

install(DIRECTORY code
    DESTINATION .
)

set(CPACK_PACKAGE_FILE_NAME "FluGalleryWin64Msvc")
set(CPACK_INCLUDE_TOPLEVEL_DIRECTORY OFF)

include(InstallRequiredSystemLibraries)
set(CPACK_GENERATOR "ZIP")
include(CPack)

message(STATUS "Configuration Options Summary --
    Target system:          ${CMAKE_SYSTEM}
    Compiler:
        Build type:         ${CMAKE_BUILD_TYPE}
        C compiler:         ${CMAKE_C_COMPILER}
        Qt version:         ${QT_DEFAULT_MAJOR_VERSION}
        Qt toolchain:       ${QT_QMAKE_EXECUTABLE}")
