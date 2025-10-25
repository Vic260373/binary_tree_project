set(TEST_SOURCES
    test_binary_tree.cpp
)

add_executable(runTests ${TEST_SOURCES})
target_link_libraries(runTests gtest gtest_main Threads::Threads)
include(GoogleTest)
gtest_discover_tests(runTests)
