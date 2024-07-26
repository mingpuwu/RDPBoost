#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "utf8_range::utf8_validity" for configuration ""
set_property(TARGET utf8_range::utf8_validity APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(utf8_range::utf8_validity PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C;CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libutf8_validity.a"
  )

list(APPEND _cmake_import_check_targets utf8_range::utf8_validity )
list(APPEND _cmake_import_check_files_for_utf8_range::utf8_validity "${_IMPORT_PREFIX}/lib/libutf8_validity.a" )

# Import target "utf8_range::utf8_range" for configuration ""
set_property(TARGET utf8_range::utf8_range APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(utf8_range::utf8_range PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libutf8_range.a"
  )

list(APPEND _cmake_import_check_targets utf8_range::utf8_range )
list(APPEND _cmake_import_check_files_for_utf8_range::utf8_range "${_IMPORT_PREFIX}/lib/libutf8_range.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
