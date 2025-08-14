#include<bits/stdc++.h>
using namespace std;

class Graph{
    vector<vector<int>> adj;

    public:
    Graph(int n){
        adj = vector<vector<int>> adj(n, vector<int>(n, 0));
    }
    
    void addEdge(int x, int y, vector<vector<int>>& adj){
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
}



int main(){

    
    addEdge(0,1,adj);
    addEdge(0,2,adj);
    addEdge(1,2,adj);

    for(auto i : adj){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }

}        