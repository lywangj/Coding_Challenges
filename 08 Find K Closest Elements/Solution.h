#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <queue>

using namespace std;

class Solution {
private:
    
public:

    Solution() {}

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left=0;
        int right=arr.size()-k;
        while(left<right){
            int mid=(right-left)/2+left;
            if(x-arr[mid]>arr[mid+k]-x){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        return vector<int>(arr.begin()+left,arr.begin()+left+k);
    }

    vector<int> method2(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> ans;

        for(int i=0;i<arr.size();++i){
            pq.push({abs(arr[i]-x),arr[i]})
            if(pq.size()>k){
                pq.pop();
            }
        }

        while(pq.size() != 0) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
    
};

#endif 