#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    int input_n = 0;

    cout<<"Please input an integer (larger than 0) : ";
    
    cin >> input_n;

    Solution solution{};

    vector<string> ans = solution.generateParenthesis(input_n);


    for(auto str: ans){
        cout<<str<<" ";
    }
    cout<<endl;

    return 0;
}

/**
 * Please input an integer (larger than 0) : 0
 * 
 * 
 * Please input an integer (larger than 0) : 1
 * ()
 * 
 * Please input an integer (larger than 0) : 2
 * (()) ()()
 *  
 * Please input an integer (larger than 0) : 3
 * ((())) (()()) (())() ()(()) ()()()
 *  
 **/
