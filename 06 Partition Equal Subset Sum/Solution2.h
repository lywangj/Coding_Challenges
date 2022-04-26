#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <set>
#include <numeric>

using namespace std;

class Solution {
private:
    vector<int> nums;
    int target;

    // bool knapSack() {}
    bool uniqueSet() {
        set<int> st;
        for(auto num: nums){
            if(num==target){
                return true;
            }
            set<int> buff;
            buff=st;
            st.insert(num);
            for(auto itr = buff.begin(); itr !=buff.end(); itr++){
                if(num+*itr==target){
                    return true;
                }
                st.insert(num+*itr);
            }
        }
        return false;
    }

public:

    Solution(vector<int>& input_nums){
        nums = input_nums;
    }

    bool canPartition() {
        int sum = std::accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0){
            return false;
        }
        target = sum/2;

        return uniqueSet();
    }
};

#endif 