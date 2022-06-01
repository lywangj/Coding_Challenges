#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
private:
    
public:

    Solution() {}

    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        unordered_map<char,int> mp;
        int start = 0;
        int maxCount=0;
        for(int i=0;i<s.length();++i){
            if(mp.empty()||mp.find(s[i])==mp.end()||mp[s[i]]<start){
                mp[s[i]]=i;
                maxCount = max(i-start+1,maxCount);
            }
            else{
                start = mp[s[i]]+1;
                mp[s[i]]=i;
            }
        }
        return maxCount;
    }

    int perfectSolution(string s) {
        vector<int> dict(256, -1);
        int maxCount = 0
        int start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxCount = max(maxCount, i-start);
        }
        return maxCount;
    }
};

#endif 