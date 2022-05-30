# Fetch GoogleTest library.
# so googletest doesn't install headers
cmake_policy(SET CMP0077 NEW)
set(INSTALL_GTEST OFF CACHE BOOL "Set to 'OFF' to not install gtest headers")

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

FetchContent_MakeAvailable(googletest)
include(GoogleTest)

########################################################################################################################
# Unit tests.
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)

