cmake_minimum_required(VERSION 3.10)

project(opengl-starter LANGUAGES C CXX)

set(OpenGL_GL_PREFERENCE GLVND)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# build GLAD as its own libary
add_library(glad STATIC src/glad.c)
target_include_directories(glad PUBLIC include)


# main add_executable
add_executable(opengl-starter
    src/main.cpp
)

target_include_directories(opengl-starter PRIVATE include)

target_compile_features(opengl-starter PRIVATE cxx_std_17)

target_compile_options(opengl-starter
    PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)

target_link_libraries(opengl-starter
    OpenGL::GL
    glfw
    glad
)
