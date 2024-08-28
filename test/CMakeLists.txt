# CMakeList.txt : CMake project for cmakeci, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (test-fact "test_fact.cpp")
target_link_libraries(test-fact src unity)

add_executable (test-fib "test_fib.cpp")
target_link_libraries(test-fib src unity)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test-fact PROPERTY CXX_STANDARD 20)
  set_property(TARGET test-fib PROPERTY CXX_STANDARD 20)
endif()

add_test(test-fact test-fact)
add_test(test-fib test-fib)

# TODO: Add tests and install targets if needed.
