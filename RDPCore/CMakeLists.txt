cmake_path(GET CMAKE_CURRENT_LIST_DIR FILENAME ModName)
string(REPLACE " " "_" ModName ${ModName})

find_package(Qt6 REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets)

set(TGT ${ModName})
message("ModName: ${ModName}")

FILE(GLOB DIR_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    "*.h"
    "*.cpp"
    "*.cc"
)

include_directories("${CMAKE_HOME_DIRECTORY}/3rdparty/protobuf_lib/include")
set(PROTOBUF_LINK_DIR "${CMAKE_HOME_DIRECTORY}/3rdparty/protobuf_lib/lib")
message("PROTOBUF_LINK_DIR:${PROTOBUF_LINK_DIR}")
link_directories(${PROTOBUF_LINK_DIR})

message("qt_add_library(\${TGT} STATIC")
    foreach(f ${DIR_SRCS})
    message("    \"${f}\"")
    endforeach()
message(")")

qt_add_library(${TGT}
    STATIC 
    ${DIR_SRCS}
)

target_link_libraries(${TGT}
    PUBLIC
    Qt6::Widgets
    Qt6::Multimedia
    Qt6::MultimediaWidgets
    PRIVATE
    protobuf
)
