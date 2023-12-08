cmake_minimum_required(VERSION 3.5)

project(Testing CXX)

add_library(testing_library source/my_funcs.cpp)

add_executable(Testing source/unit_tests.cpp)

add_subdirectory(googletest)
find_package(GTest REQUIRED)

target_include_directories(Testing
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

enable_testing()

target_link_libraries(Testing
    testing_library
    GTest::GTest 
    GTest::Main
)

add_test(test_all Testing)