cmake_minimum_required(VERSION 3.16)

project(test_C LANGUAGES C)

add_executable(test_C main.c
    functions.h
    functions.c)

include(GNUInstallDirs)
install(TARGETS test_C
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
