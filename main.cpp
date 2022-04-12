#include <assert.h>
#include <iostream>
#include <tuple>   
#include <vector>
#include <string>
#include <fstream>
#include "Solution.h"

using namespace std;

int main(int argc, char** argv)
{
    if (argc != 2) {
        cerr << "Usage: myprog FILENAME\n";
        return 1;
    }

    vector<vector<int>> grid ;
    string line;
    ifstream infile(argv[1]);

    while (getline(infile, line)) {
        vector<int> row;
        for (char &c : line) {
            if (c != ',') {
                int a = c-'0';
                row.push_back(a);
            }
        }
        grid.push_back(row);
    }

    Solution solution{grid};
    
    cout<<"Max area of islands is "<< solution.maxAreaOfIsland()<<endl;

    // for (std::vector<int> &row : grid) {
    //     for (int &c : row) {
    //         std::cout << c << ' ';
    //     }
    //     std::cout << '\n';
    // }

    return 0;
}
