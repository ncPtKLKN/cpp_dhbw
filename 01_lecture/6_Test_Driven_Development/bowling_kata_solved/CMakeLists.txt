cmake_minimum_required(VERSION 3.8)

set(This bowling_kata)

project(${This})

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.13.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

set(Headers
    src/game.hpp
)

set(Sources
    src/game.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})
add_subdirectory(test)

# add_executable(${This}_app src/main.cpp)
