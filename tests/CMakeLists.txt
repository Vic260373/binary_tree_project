set(TEST_SOURCES
    test_binary_tree.cpp
)

add_executable(runTests ${TEST_SOURCES})

# Линкуем системный gtest и pthread
target_link_libraries(runTests gtest gtest_main Threads::Threads)

# Подключаем GoogleTest интеграцию
include(GoogleTest)

# Регистрируем тесты в CTest
gtest_discover_tests(runTests)
