cmake_minimum_required(VERSION 3.10)

project(opengl-starter LANGUAGES C)

add_executable(opengl-starter
    src/main.c
)

target_include_directories(opengl-starter PRIVATE include)

target_compile_features(opengl-starter PRIVATE c_std_11)

target_compile_options(opengl-starter
    PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)
