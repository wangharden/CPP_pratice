#include <iostream>
#include<limits>
#include "VirtualFunctions/animal.hpp"
#include"utilize/MenuUtils.h"
#include"Solution.h"


int main() {
    int choice=-1;//初始化choice
    do
    {
        printmenu();//输入验证
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input , please re_enter the num" << std::endl;
            choice = -1;
            continue;
        }
        switch (choice)
        {
        case(1):
            runVirtualFunctionDemo();
            break;
        case(2):
            runBinarySearchDemo();
            break;
        default:
            std::cout << "Invalid input" << std::endl;
        }
    } while (choice != 0);
    
     
    return 0;
}