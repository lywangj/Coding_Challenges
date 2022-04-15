#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <queue>

using namespace std;

class Solution {
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;
    
public:
    Solution(int input_k, vector<int>& nums) {
        k = input_k;
        for(auto num: nums){
            pq.push(num);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>k){
            pq.pop();
        }
        return pq.top();
    }
    
};
#endif 
