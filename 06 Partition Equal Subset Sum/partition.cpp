#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include "Solution.h"

using namespace std;

void printArray(vector<int> array);

int main(int argc, char** argv)
{
    if (argc != 2) {
        cerr << "Usage: myprog FILENAME\n";
        return 1;
    }

    vector<int> nums ;
    int num;
    ifstream infile(argv[1]);

    while (infile >> num) {
        nums.push_back(num);
    }
    infile.close();

    Solution solution{nums};

    bool ans = false;

    while(!ans){
        cout << "input array : ";
        printArray(solution.getCurrentArray());
        ans = solution.canPartition();
        if(ans){
            cout << "Yes, this array can be partitioned into two subsets with equal sums." << endl;
        }
        else{
            cout << "No, this array can NOT be partitioned into two subsets with equal sums." << endl;
            cout << "Try to input a new integer : ";
            int input;
            cin >> input;
            solution.updateIntegers(input);
        }
    }
    return 0;
}

/**
 * input array : 1 5 11 5 3
 * No, this array can NOT be partitioned into two subsets with equal sums.
 * Try to input a new integer : 1
 * input array : 1 5 11 5 3 1
 * Yes, this array can be partitioned into two subsets with equal sums.
 *  
 **/

void printArray(vector<int> array){
    // sort(array.begin(), array.end());
    for(auto element: array){
        cout<<element<<" ";
    }
    cout<<endl;
}
