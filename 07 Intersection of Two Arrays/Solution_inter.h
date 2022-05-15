#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

/** 350. Intersection of Two Arrays II
 * Example1
 * Input: nums1 = [1,2,2,1], nums2 = [2,2]
 * Output: [2,2]
 * 
 * Example2
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [4,9]
 * Explanation: [9,4] is also accepted.
 **/

class Solution {
public:
    // O(2N) Time, O(N) space
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0; i<nums1.size(); ++i){
            mp[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); ++i){
            if(mp[nums2[i]] != 0){
                mp[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};

class Solution {
public:
    // O(3N) Time, O(2N) space
    // 2 pointers
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0, j=0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1.at(i)==nums2.at(j)){
                ans.push_back(nums1.at(i));
                i++;
                j++;
            }
            else if(nums1.at(i)>nums2.at(j)){
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
