#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"

using namespace std;

int main(int argc, char** argv)
{
    
    string input;

    cout<<"Please input any string : ";
    
    cin >> input;

    Solution solution{};

    int ans = solution.lengthOfLongestSubstring(input);

    cout<<"The length of logest substring is "<<ans<<endl;

    return 0;
}

/**
Please input any string : bbabcabcdd
The length of logest substring is 4
 **/
