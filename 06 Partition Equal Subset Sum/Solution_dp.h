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

    bool knapSack() {
        // initialise knapSack array
        int size = nums.size();

        int dp[size+1][target+1];
        for(int j=0; j<=size; ++j){
            dp[j][0]=1;
        }
        for(int i=1; i<=target ; ++i){
            dp[0][i]=0;
        }

        // dynamic programming
        for(int j=1; j<=size; ++j){
            for(int i=1; i<=target; ++i){
                if(i>=nums[j-1]){
                    dp[j][i] = dp[j-1][i-nums[j-1]] || dp[j-1][i];
                }
                else{
                    dp[j][i] = dp[j-1][i];
                }
            }
        }
        return dp[size][target];
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

        return knapSack();
    }
    
    void updateIntegers(int input_num){
        nums.push_back(input_num);
    }

    vector<int> getCurrentArray(){
        return nums;
    }
};

#endif 
