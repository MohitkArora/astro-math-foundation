cmake_minimum_required(VERSION 3.20)
project(astro_math_foundation LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Eigen3 REQUIRED)
find_package(fmt REQUIRED)

add_library(astro_math INTERFACE)
target_include_directories(astro_math INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(astro_math INTERFACE Eigen3::Eigen fmt::fmt)

enable_testing()
