#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"

using namespace std;

int main(int argc, char** argv)
{
    int input_k = 2;                      // find the 2nd largest number in a stream 
    vector<int> nums = {3, 5, 1, 2};      // the original stream
    vector<int> items = {3, 5, 6, 9, 4};  // find the 2nd largest number after add each item in the stream 

    Solution solution{input_k, nums};

    // print out result
    int order = 1;
    for(auto item: items){
        cout<< order++ << ". add: "<<item<<", ans: "<< solution.add(item)<<endl;
    }
    cout<<endl;

    return 0;
}

/** Output:
 * 1. add: 3, ans: 3
 * 2. add: 5, ans: 5
 * 3. add: 6, ans: 5
 * 4. add: 9, ans: 6
 * 5. add: 4, ans: 6
 *
 **/
