#ifndef __SOLUTION_H__
#define __SOLUTION_H__
#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    vector<vector<int>> grid;
    int size_x;
    int size_y;
    int newArea;
    int maxArea;

    void resetNewArea(){
        newArea=0;
    }

    void updateMaxArea(){
        maxArea = max(maxArea, newArea);
    }

    void printGrid(){
        for(int j=0; j<size_y; ++j){
            for(int i=0; i<size_x; ++i){
                cout<<grid[j][i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

public:

    Solution(vector<vector<int>>& inputGrid){
        grid = inputGrid;
        size_y = inputGrid.size();
        size_x = inputGrid.at(0).size();
        // newArea = 0;
        maxArea = 0;

    }

    bool isAbleToGo(size_t y, size_t x){
        if(y<0 || y>=size_y || x<0 || x>=size_x){
            return false;
        }
        if(grid[y][x]!=1){
            return false;
        }
        return true;
    }
    
    void goToNewBlock(size_t y, size_t x){
        // check whether it's a unvisited block
        if(!isAbleToGo(y, x)){
            return;
        }
      
        // mark after this block is visited
        grid[y][x]=2;
        newArea++;

        goToNewBlock(y, x+1);
        goToNewBlock(y, x-1);
        goToNewBlock(y+1, x);
        goToNewBlock(y-1, x);

    }
    
    int maxAreaOfIsland() {
        for(int j=0; j<grid.size(); ++j){
            for(int i=0; i<grid.at(0).size(); ++i){
                // calculate the area for each island
                resetNewArea();
                goToNewBlock(j,i);
                updateMaxArea();               
            }
        }
        return maxArea;
    }

};
#endif 
