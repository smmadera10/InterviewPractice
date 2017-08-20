#include <iostream>
#include "cracking_code_interview/solutions1.h"
#include "DataStructures/JRLinkedList/JRLinkedList.h"
#include "DataStructures/JRStack/Stack.h"
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

/*void printStack(const Stack& stack) {
    cout << "STACK ----" << endl;
    StackNode* current = stack.top;
    while(current) {
        cout << current->data << endl;
        current = current->next;
    }
    cout << "END ------" << endl;
}*/

int main(int argc, char* argv[])
{
    runTests(argc, argv);
/*    Stack original = Stack();
    original.push(5);
    original.push(11);
    printStack(original);
    Stack copy = original;
    printStack(copy);*/

    return 0;
}



