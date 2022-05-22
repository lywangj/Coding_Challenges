#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <queue>

using namespace std;

class Solution {
private:
    vector<string> ans;
  
    void parenthesis(int left, int right, string str) {  
        if(left == 0 && right == 0) {
            ans.push_back(str);
            return;
        }
        if(left != 0) {
            string str1 = str;
            str1 += "(";            
            parenthesis(left-1, right, str1);            
        }
        if(right > left) {
            string str2 = str;
            str2 += ")";
            parenthesis(left, right-1, str2);
        }
    }

public:
    Solution(){};
    
    vector<string> generateParenthesis(int n) {
        parenthesis(n, n, "");
        return ans;
    }
};

#endif 