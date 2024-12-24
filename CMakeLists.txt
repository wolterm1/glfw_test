cmake_minimum_required(VERSION 3.31.3)


project(glfw-test
        VERSION 1.0)


# add glfw
# add_subdirectory , glfw contains CMakeLists.txt
add_subdirectory(external/glfw)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

# add glad
# add_library, glad does not contain CMakeLists, compile with Headers etc
add_library(glad STATIC external/glad/src/glad.c)
target_include_directories(glad PUBLIC external/glad/include)

# add glm
add_subdirectory(external/glm)


include_directories(include)
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cpp)


add_executable(window ${sources})
target_link_libraries(window glfw glad glm::glm)
