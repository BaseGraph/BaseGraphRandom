add_executable(test_random randomgraphs.cpp)
target_link_libraries(test_random ${EXTENSION_NAME} gtest gtest_main)
add_test(test_random test_random)
