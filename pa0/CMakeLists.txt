cmake_minimum_required(VERSION 3.5)
project(Games_PA0 VERSION 1.0.0 LANGUAGES CXX)
# 加入子目录的 CMakeLists.txt
add_subdirectory(${PROJECT_SOURCE_DIR}/app)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
