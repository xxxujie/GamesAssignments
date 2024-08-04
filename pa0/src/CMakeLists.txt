aux_source_directory(. LIB_SRCS)
add_library(LibExample ${LIB_SRCS})
target_compile_features(LibExample PRIVATE cxx_std_11)
target_include_directories(LibExample PRIVATE ${PROJECT_SOURCE_DIR}/includes)
