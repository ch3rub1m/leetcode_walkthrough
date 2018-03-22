//
//  0001_two_sum.hpp
//  leetcode_walkthrough
//
//  Created by Tan Que on 22/03/2018.
//  Copyright © 2018 Tan Que. All rights reserved.
//

#ifndef _001_two_sum_hpp
#define _001_two_sum_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vector<int> result{i, j};
                    return result;
                }
            }
        }
        vector<int> result;
        return result;
        
    }
};

#endif /* _001_two_sum_hpp */
