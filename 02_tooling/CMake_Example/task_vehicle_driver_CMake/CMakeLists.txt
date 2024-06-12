#set minimum version (fetch_content available since 3.11)
cmake_minimum_required(VERSION 3.11)
#set project name
project(task_vehicle_driver)

#set variable exeName
set(exeName "vehicleDriver")

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Variante 1: --> Lokal & schnell
#set variable NLOHMAN_JSON_DIR to the directory
#set(NLOHMAN_JSON_DIR "${CMAKE_SOURCE_DIR}/3rd_Party/json/build/")
#message(STATUS ${NLOHMAN_JSON_DIR})
#help to find lib
#set(CMAKE_PREFIX_PATH ${NLOHMAN_JSON_DIR})
#Search for library
#find_package(nlohmann_json REQUIRED)

#Variante 2: --> einfach, kann im Build aber länger dauern
include(FetchContent)
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

set(Sources
    src/car.cpp
    src/driver.cpp
    src/motorbike.cpp
    src/vehicle.cpp
    src/main.cpp
)
#add executable
add_executable(${exeName} ${Sources})
#include
target_include_directories(${exeName} PUBLIC "${CMAKE_SOURCE_DIR}/inc/")
#link
target_link_libraries(${exeName} nlohmann_json::nlohmann_json)


# Detect the operating system
if(WIN32)
    message(STATUS "Compiling on Windows")
    add_definitions(-DOS_WINDOWS)
elseif(APPLE)
    message(STATUS "Compiling on macOS")
    add_definitions(-DOS_MAC)
endif()

#alternative für main_copy
set(LibSources src/car.cpp
    src/driver.cpp
    src/motorbike.cpp
    src/vehicle.cpp
)
add_library(vehicleLib STATIC ${LibSources})
target_include_directories(vehicleLib PUBLIC "${CMAKE_SOURCE_DIR}/inc/")
add_executable(${exeName}_copy src/main_copy.cpp)
target_include_directories(${exeName}_copy PUBLIC "${CMAKE_SOURCE_DIR}/inc/")
target_link_libraries(${exeName}_copy vehicleLib nlohmann_json::nlohmann_json)

