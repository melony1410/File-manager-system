cmake_minimum_required(VERSION 3.5)

project(Manager_system LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Manager_system
main.cpp
File_manager.h
File_manager.cpp
Internal_storage.h
Internal_storage.cpp
External_storage.h
External_storage.cpp)

install(TARGETS Manager_system
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
