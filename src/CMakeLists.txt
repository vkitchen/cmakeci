# CMakeList.txt : CMake project for cmakeci, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (cmakeci "main.cpp" "fact.cpp" "fact.h" "fib.cpp" "fib.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cmakeci PROPERTY CXX_STANDARD 20)
endif()

add_library(src STATIC fact.cpp fib.cpp)
target_include_directories(src PUBLIC ${CMAKE_CURRENT_LIST_DIR})

# TODO: Add tests and install targets if needed.
