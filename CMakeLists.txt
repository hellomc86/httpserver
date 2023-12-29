# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.2)

project ("httpserver")

# Include sub-projects.
add_subdirectory ("server")
add_subdirectory ("idhandler")
