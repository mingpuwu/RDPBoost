#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "protobuf::libprotobuf-lite" for configuration ""
set_property(TARGET protobuf::libprotobuf-lite APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::libprotobuf-lite PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libprotobuf-lite.a"
  )

list(APPEND _cmake_import_check_targets protobuf::libprotobuf-lite )
list(APPEND _cmake_import_check_files_for_protobuf::libprotobuf-lite "${_IMPORT_PREFIX}/lib/libprotobuf-lite.a" )

# Import target "protobuf::libprotobuf" for configuration ""
set_property(TARGET protobuf::libprotobuf APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::libprotobuf PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libprotobuf.a"
  )

list(APPEND _cmake_import_check_targets protobuf::libprotobuf )
list(APPEND _cmake_import_check_files_for_protobuf::libprotobuf "${_IMPORT_PREFIX}/lib/libprotobuf.a" )

# Import target "protobuf::libprotoc" for configuration ""
set_property(TARGET protobuf::libprotoc APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::libprotoc PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libprotoc.a"
  )

list(APPEND _cmake_import_check_targets protobuf::libprotoc )
list(APPEND _cmake_import_check_files_for_protobuf::libprotoc "${_IMPORT_PREFIX}/lib/libprotoc.a" )

# Import target "protobuf::libupb" for configuration ""
set_property(TARGET protobuf::libupb APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::libupb PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libupb.a"
  )

list(APPEND _cmake_import_check_targets protobuf::libupb )
list(APPEND _cmake_import_check_files_for_protobuf::libupb "${_IMPORT_PREFIX}/lib/libupb.a" )

# Import target "protobuf::protoc" for configuration ""
set_property(TARGET protobuf::protoc APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::protoc PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/protoc.exe"
  )

list(APPEND _cmake_import_check_targets protobuf::protoc )
list(APPEND _cmake_import_check_files_for_protobuf::protoc "${_IMPORT_PREFIX}/bin/protoc.exe" )

# Import target "protobuf::protoc-gen-upb" for configuration ""
set_property(TARGET protobuf::protoc-gen-upb APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::protoc-gen-upb PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/protoc-gen-upb.exe"
  )

list(APPEND _cmake_import_check_targets protobuf::protoc-gen-upb )
list(APPEND _cmake_import_check_files_for_protobuf::protoc-gen-upb "${_IMPORT_PREFIX}/bin/protoc-gen-upb.exe" )

# Import target "protobuf::protoc-gen-upbdefs" for configuration ""
set_property(TARGET protobuf::protoc-gen-upbdefs APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::protoc-gen-upbdefs PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/protoc-gen-upbdefs.exe"
  )

list(APPEND _cmake_import_check_targets protobuf::protoc-gen-upbdefs )
list(APPEND _cmake_import_check_files_for_protobuf::protoc-gen-upbdefs "${_IMPORT_PREFIX}/bin/protoc-gen-upbdefs.exe" )

# Import target "protobuf::protoc-gen-upb_minitable" for configuration ""
set_property(TARGET protobuf::protoc-gen-upb_minitable APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::protoc-gen-upb_minitable PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/protoc-gen-upb_minitable.exe"
  )

list(APPEND _cmake_import_check_targets protobuf::protoc-gen-upb_minitable )
list(APPEND _cmake_import_check_files_for_protobuf::protoc-gen-upb_minitable "${_IMPORT_PREFIX}/bin/protoc-gen-upb_minitable.exe" )

# Import target "protobuf::gmock" for configuration ""
set_property(TARGET protobuf::gmock APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(protobuf::gmock PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libgmock.a"
  )

list(APPEND _cmake_import_check_targets protobuf::gmock )
list(APPEND _cmake_import_check_files_for_protobuf::gmock "${_IMPORT_PREFIX}/lib/libgmock.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
