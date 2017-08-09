cmake_minimum_required(VERSION 3.6)
project(sergiotest)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

set(SOURCE_FILES main.cpp cracking_code_interview/solutions1.h cracking_code_interview/solutions1.cpp DataStructures/JRLinkedList/JRLinkedList.h DataStructures/JRLinkedList/JRLinkedListNode.h Tests/JRLinkedList/Test_JRLinkedList.cpp)
add_executable(sergiotest ${SOURCE_FILES})

target_link_libraries(sergiotest gtest gtest_main)