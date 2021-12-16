cmake_minimum_required(VERSION 3.10)

project(String VERSION 0.0.2 DESCRIPTION "A C string library")

include(GNUInstallDirs)

add_library(sstring SHARED
        src/sstring.c

        src/new/new_string.c
        src/new/new_from_cstring.c
        src/new/copy.c
        src/new/delete.c


        src/substring/substring.c
        src/substring/from_index.c  
        src/substring/to_index.c  
        src/substring/with_length.c

        src/concat.c
        src/compare.c
)

set_target_properties(sstring PROPERTIES 
        VERSION ${PROJECT_VERSION}
        SOVERSION 1
        PUBLIC_HEADER include/sstring.h
)

target_include_directories(sstring PRIVATE include)

configure_file(sstring.pc.in sstring.pc @ONLY)

install(TARGETS sstring
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES ${CMAKE_BINARY_DIR}/sstring.pc
        DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
