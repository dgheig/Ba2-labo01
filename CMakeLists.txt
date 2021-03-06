cmake_minimum_required(VERSION 3.10)
# make_minimum_required(VERSION 3.5)

# https://gitlab.kitware.com/cmake/community/-/wikis/doc/cmake/Useful-Variables
project(labo01)

# file(MAKE_DIRECTORY ${directory})
file(MAKE_DIRECTORY builds)
# set(CMAKE_EXECUTABLE_OUTPUT_PATH /builds)
# https://cmake.org/cmake/help/latest/variable/CMAKE_SOURCE_DIR.html#variable:CMAKE_SOURCE_DIR
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

############################################################
# Create a library
############################################################

#Generate the static library from the library sources
add_library(geometry_library STATIC
    src/geometry.cpp
)

target_include_directories(geometry_library
    PUBLIC
        ${PROJECT_SOURCE_DIR}/src
)


############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(labo01
    labo_01_comte_emmanuelle_gallay_david.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( labo01
    PRIVATE
        geometry_library
)