cmake_path(GET CMAKE_CURRENT_LIST_DIR FILENAME ModName)
string(REPLACE " " "_" ModName ${ModName})

set(PROTOC_EXECUTABLE ${CMAKE_HOME_DIRECTORY}/3rdparty/protobuf_lib/bin/protoc.exe)

set(PROTO_OUTPUT_DIR ${CMAKE_HOME_DIRECTORY}/Proto)

set(PROTO_FILES ${PROTO_OUTPUT_DIR}/RDPBoost.proto)

add_custom_command(
    OUTPUT ${PROTO_OUTPUT_DIR}
    COMMAND ${PROTOC_EXECUTABLE}
    ARGS --proto_path=${PROTO_OUTPUT_DIR}
    ARGS ${PROTO_FILES}
    ARGS --cpp_out=${PROTO_OUTPUT_DIR}
    DEPENDS ${PROTO_FILES}
    COMMENT "Generating proto file "
)

#add_custom_target(protocgen ALL DEPENDS ${PROTO_OUTPUT_DIR})

set(TGT ${ModName})
message("ModName: ${ModName}")

FILE(GLOB DIR_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    "*.h"
    "*.cc"
)

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
    protobuf
)
