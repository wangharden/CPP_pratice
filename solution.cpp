#include "Solution.h"
#include<iostream>
#include<vector>
#include<limits>



int BinarySearch::search(std::vector<int>& nums, int target) {
    size_t left = 0;
    size_t right = nums.size() - 1;
    while (left <= right) {
        int middle = left + ((right - left) / 2);
        if (nums[middle] > target) {
            right = middle - 1;
        }
        else if (nums[middle] < target) {
            left = middle + 1;
        }
        else {
            return middle;
        }
    }
    return -1;
}

void runBinarySearchDemo() {
    std::vector<int> nums;
    int num;
    std::cout << "please input num in order £¨Enter non-number to end £©£º" << std::endl;
    while (std::cin >> num) {
        nums.push_back(num);
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int target;
    std::cout << "Please enter the target value you are looking for£º" << std::endl;
    while (!(std::cin >> target)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input, please re-enter the target value:" << std::endl;
    }

    BinarySearch solution;
    int result = solution.search(nums, target);
    if (result != -1) {
        std::cout << "Target " << target << " The index in the array is: " << result << std::endl;
    }
    else {
        std::cout << "Target value not found " << target << std::endl;
    }
}