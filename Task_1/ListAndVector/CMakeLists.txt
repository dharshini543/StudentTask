cmake_minimum_required(VERSION 3.16)

project(ListAndVector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ListAndVector main.cpp
    Student.h Student.cpp
    Staff.h Staff.cpp
    College.h College.cpp)

include(GNUInstallDirs)
install(TARGETS ListAndVector
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
