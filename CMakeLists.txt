cmake_minimum_required(VERSION 3.31.3)


project(glfw-test
        VERSION 1.0)


find_package(glfw3 3.4 REQUIRED)
find_package(OpenGL REQUIRED)
add_library(glad STATIC external/glad/src/glad.c)
target_include_directories(glad PUBLIC external/glad/include)


include_directories(include)
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cpp)


add_executable(window ${sources})
target_link_libraries(window glfw OpenGL::GL glad)
