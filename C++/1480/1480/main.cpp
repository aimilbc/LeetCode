//
//  main.cpp
//  1480
//
//  Created by Aimi Ross on 6/17/20.
//  Copyright © 2020 Aimi Ross. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Solution.h"

using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> vec;
    Solution sol;
    
    cout << "This program will sum up elements in a vector as it goes up elements.\n" << endl;
    // 1. declaring the vector
    // 2. displaying the original vector
    // 3. call class:Solution's runningSum function
    // 4. dsiplaying calculated elements
    
    // 1.
    for (int i = 1; i < 5; i++)
        vec.push_back(i);
    
    // 2.
    cout << "The original vector: " ;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
    
    vector<int> ans;
    
    // 3.
    ans = sol.runningSum(vec);
    
    // 4.
    cout << "The calculated vector: " ;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    cout << endl << endl;
    
    return 0;
}
