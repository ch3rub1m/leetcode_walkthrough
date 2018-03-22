//
//  0001_two_sum.cpp
//  leetcode_walkthrough
//
//  Created by Tan Que on 22/03/2018.
//  Copyright © 2018 Tan Que. All rights reserved.
//

#include "0001_two_sum.hpp"

#include <stdio.h>
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> input{2, 7, 11, 15};
    Solution *solution = new Solution();
    vector<int> result = solution->twoSum(input, 9);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}
