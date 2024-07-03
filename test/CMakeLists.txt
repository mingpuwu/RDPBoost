cmake_minimum_required(VERSION 3.14)

project(test_ffmpeg LANGUAGES CXX)


set(FFMPEG_DLL_DIR "/usr/local/lib")

add_executable(test_ffmpeg main.cpp DecodeImp.cpp EncodeImp.cpp)

link_directories(${FFMPEG_DLL_DIR})
# include_directories(${FFMPEG_DLL_INC})

# target_link_libraries(test_ffmpeg Qt${QT_VERSION_MAJOR}::Core
#     ${FFMPEG_DLL_DIR}/avcodec.lib
#     ${FFMPEG_DLL_DIR}/avformat.lib
#     ${FFMPEG_DLL_DIR}/avutil.lib
#     ${FFMPEG_DLL_DIR}/swscale.lib)

target_link_libraries(test_ffmpeg
                      libavcodec.so
                      libavformat.so
                      libavutil.so
                      libswscale.so
                      libswresample.so
                      libavcodec.so.58)

# include(GNUInstallDirs)
# install(TARGETS test_ffmpeg
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )
