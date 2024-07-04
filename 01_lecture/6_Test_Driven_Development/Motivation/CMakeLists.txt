cmake_minimum_required(VERSION 3.8)

set(This facultyCalulator)

project(${This})

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)



# Add executable
add_executable(${This} src/main.cpp src/factorial.cpp)
target_include_directories(${This} PUBLIC inc)


# Add test
include(ctest)
enable_testing()
add_executable(${This}Test test/test_main.cpp src/factorial.cpp)
target_include_directories(${This}Test PUBLIC inc)
target_link_libraries(${This}Test GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(${This}Test)