cmake_minimum_required(VERSION 3.4...3.18)
project(pyrate4site)

add_subdirectory(pybind11)
pybind11_add_module(pyrate4site cpp/main.cpp)

target_compile_definitions(pyrate4site
                           PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})