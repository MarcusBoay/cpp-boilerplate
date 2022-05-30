cmake_minimum_required(VERSION 3.16)
project(MyProject)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Set C++ standards.
set(CMAKE_CXX_STANDARD 17)

# Add CXX flags.
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

set(CMAKE_BUILD_TYPE Release)

set(VERSION_STRING "0.1.0")


set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

# Build the source directory.
add_subdirectory(
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# CTest support.
enable_testing()
# Build unit tests.
add_subdirectory(
    ${CMAKE_CURRENT_SOURCE_DIR}/unittest
)