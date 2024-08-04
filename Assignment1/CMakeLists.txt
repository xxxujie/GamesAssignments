cmake_minimum_required(VERSION 3.9)
project(CppProjTemplate VERSION 1.0.0 LANGUAGES CXX)
find_package(OpenCV REQUIRED)

# 加入子目录的 CMakeLists.txt
add_subdirectory(${PROJECT_SOURCE_DIR}/app)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)