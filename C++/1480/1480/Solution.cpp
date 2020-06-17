//
//  Solution.cpp
//  1480
//
//  Created by Aimi Ross on 6/17/20.
//  Copyright © 2020 Aimi Ross. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "Solution.h"
#include <vector>

using namespace std;

vector<int> Solution::runningSum(vector<int>& nums) {
    // 1. create a vector to store calculated elements
    // 2. storing the elements. It will adds up as it goes.
    // 3. return the calculated vector
    
    // 1.
    vector<int> vec;
    vector<int>::iterator ptr;
    
    // 2.
    for (ptr = nums.begin(); ptr < nums.end(); ptr++){
        if(ptr == nums.begin()){    // the first element stores the original value
            vec.push_back(*ptr);
        }
        else {                      // from the second element stores the previous value + current value
            int temp = vec.back();
            vec.push_back(temp + *ptr);
        }
    }
    
    // 3.
    return vec;
}


