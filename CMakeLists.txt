cmake_minimum_required(VERSION 3.14)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

# --- Główny program ---
add_executable(MyProgram main.cpp "game.cpp" "GameState.h" "ui.cpp" "ui.h")

# --- Google Test ---
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# --- Testy ---
enable_testing()
add_executable(MyTests tests/test_my_func.cpp "game.cpp" "GameState.h" "ui.cpp" "ui.h")
target_link_libraries(MyTests gtest_main)
include(GoogleTest)
gtest_discover_tests(MyTests)