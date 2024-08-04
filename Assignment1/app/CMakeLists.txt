aux_source_directory(. APP_SRCS) # 指定目录下所有源文件（.cpp）存入变量
add_executable(App ${APP_SRCS})
target_compile_features(App PRIVATE cxx_std_11)
target_include_directories(App PRIVATE ${PROJECT_SOURCE_DIR}/includes ${OpenCV_INCLUDE_DIRS})
target_link_libraries(App LibDemo ${OpenCV_LIBS})