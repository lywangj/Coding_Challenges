using namespace std;

#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

class courseSchedule {
    public:
    // Reference from johnwick_141 @Leetcode
    static bool canFinish(int n, vector<vector<int>>& pre){
        int size = pre.size();
        vector<int> adj[n];
        vector<int> indegree(n,0);

		// Creating a Graph of n vertices 
        for(int i=0;i<size;i++){
            adj[pre[i][1]].push_back(pre[i][0]);
        }

		// Finding Indegree of nodes
        for(int i=0;i<size;i++){
            for(auto it:adj[i])                   
                indegree[it]++;
        }

		// Push the nodes in the queue which have indgree as zero
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)
                q.push(i);
        }

        // If queue size is zero (no node with indegree as zero),
        // graph contains cycles
        if(q.size()==0) return false;
        // Count the number of nodes from indegree as zero to indegree as larger number
        int count=0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            for(auto it:adj[node]){
                if(indegree[it]!=0){
                    indegree[it]--;
                    if(indegree[it]==0)
                    q.push(it);
                }
            }
        }

		// if size of topo vector is not equal to number of vertices 
        // than the topo sort is not correct/Graph contains a cycle
        if(count==n) return true;
        return false;
    }
};

int main(int argc, char* argv[]) {

    vector<vector<int>> course;
    vector<int> c1({2,1});
    vector<int> c2({1,0});
    vector<int> c3({0,3});
    vector<int> c4({0,4});
    vector<int> c5({2,0});

    course.push_back(c1);
    course.push_back(c2);
    course.push_back(c3);
    course.push_back(c4);

    if(courseSchedule::canFinish(5,course)){
        cout << "These couses can be finished."<<endl;
    }else{
        cout << "These couses can NOT be finished."<<endl;
    }
}
