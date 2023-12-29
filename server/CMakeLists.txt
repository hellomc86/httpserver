# CMakeList.txt : CMake project for intervaltree, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (server "server.cpp" "server.h")

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(server PRIVATE Threads::Threads)
target_link_libraries(server PUBLIC idhandler)

# TODO: Add tests and install targets if needed.

