cmake_minimum_required(VERSION 3.5)

project(03.homework)


add_executable(
	BinarySearch
	BinarySearch.cpp
	checkValue.cpp
	checkValue.h
	highScore.cpp
	highScore.h
	randomValue.cpp
	randomValue.h
)
set_target_properties(BinarySearch PROPERTIES
CXX_STANDARD 17
CXX_STANDARD_REQUIRED ON)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
target_compile_options(calc PRIVATE
-g
-Wall
-Wextra
-Werror
-pedantic
)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
endif()