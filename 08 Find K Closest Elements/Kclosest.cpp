#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"

using namespace std;

int main(int argc, char** argv)
{
    
    vector<int> arr = {1,2,3,4,5};    // given a sorted integer array
    int input_k = 3;                  // return the k closest integers 
    int input_x = 3;                  // to x in the array

    Solution solution{};

    vector<int> ans = solution.findClosestElements(arr,input_k,input_x);

    cout<<"[ ";
    for(int num: ans){
        cout<<num<<" ";
    }
    cout<<"]"<<endl;

    return 0;
}

/**
[ 2 3 4 ]
 **/
