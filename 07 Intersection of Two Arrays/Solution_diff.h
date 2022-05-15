#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

/** 2215. Find the Difference of Two Arrays
 * Example1
 * Input: nums1 = [1,2,3], nums2 = [2,4,6]
 * Output: [[1,3],[4,6]]
 * 
 * Example2
 * Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
 * Output: [[3],[]]
 **/

class Solution {
public:
    // O(4N) Time, O(2N) space
    // Runtime: 72 ms
    // Memory Usage: 33.3 MB
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1, ans2;
        unordered_map<int,int> mp1, mp2;
        for(int num: nums1){
            mp1[num]++;
        }
        for(int num: nums2){
            mp2[num]++;
        }
        for(auto x: mp1){
            if(mp2.find(x.first)==mp2.end()){
                ans1.push_back(x.first);
            }
        }
        for(auto x: mp2){
            if(mp1.find(x.first)==mp1.end()){
                ans2.push_back(x.first);
            }
        }
        return {ans1, ans2};
    }
}

class Solution {
public:
    //  O(2N+NlogN) time O(1) space
    // Runtime: 29 ms
    // Memory Usage: 26.5 MB
    //
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans1, ans2;
        for(int i=0; i<nums1.size();++i) {
            if(i==0) {
                if(!binary_Search(nums1[i],nums2.begin(),nums2.end())) {
                    ans1.push_back(nums1[1]);
                }
            }else {
                if(nums1[i]!=nums1[i-1] &&
                !binary_Search(nums1[i],nums2.begin(),nums2.end())) {
                    ans1.push_back(nums1[1]);
                }
            }
        }
        for(int i=0; i<nums2.size();++i) {
            if(i==0) {
                if(!binary_Search(nums2[i],nums1.begin(),nums1.end())) {
                    ans2.push_back(nums2[1]);
                }
            }else {
                if(nums1[i]!=nums1[i-1] &&
                !binary_Search(nums2[i],nums1.begin(),nums1.end())) {
                    ans2.push_back(nums2[1]);
                }
            }
        }
        return {ans1, ans2};
    }
};

class Solution {
public:  
    // O(4N) Time, O(2N) space
    // Runtime: 93 ms
    // Memory Usage: 31.8 MB
        vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        vector<int> ans1, ans2;
        for(auto num: s1){
            if(s2.find(num)==s2.end())
                ans1.push_back(num);
        }
        for(auto num: s2){
            if(s1.find(num)==s1.end())
                ans2.push_back(num);
        }
        return {ans1,ans2};
    }
};

class Solution {
public:    
    // O(5N) Time, O(3N) space
    // Runtime: 97 ms
    // Memory Usage: 31.6 MB
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1;
        vector<int> ans2;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        unordered_map<int,int> mp;
        for(auto itr=s1.begin(); itr!=s1.end(); itr++){
            mp[*itr]++;
        }
        for(auto itr=s2.begin(); itr!=s2.end(); itr++){
            if(mp.find(*itr)==mp.end()){
                ans2.push_back(*itr);
            }
            else if(mp[*itr]>0){
                mp[*itr]--;
            }
        }
        for(auto x : mp){
            if(x.second!=0){
                ans1.push_back(x.first);
            }
        }
        return {ans1,ans2};
    }
};