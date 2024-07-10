cmake_minimum_required(VERSION 3.8)

set(This gameTest)

set(Sources
    gameTest.cpp)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    bowling_kata
)

add_test(
    NAME ${This}
    COMMAND ${This}
)