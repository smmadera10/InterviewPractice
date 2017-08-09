#include <iostream>
#include "cracking_code_interview/solutions1.h"
#include "DataStructures/JRLinkedList/JRLinkedList.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void runTests(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
}

int main(int argc, char* argv[])
{
    JRLinkedList<int>* testList = new JRLinkedList<int>();
    cout << "yo" << endl;
    runTests(argc, argv);
    delete testList;
    return 0;
}



