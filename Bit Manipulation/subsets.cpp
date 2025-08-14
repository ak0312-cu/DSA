#include<bits/stdc++.h>
using namespace std;

void findSubset(vector<int>& arr, vector<vector<int>>& allSubsets){
    int n = pow(2,arr.size());

    for(int i = 0; i < n; i++){
        vector<int> subset;
        for(int j = 0; j < arr.size(); j++){
            if(i & 1 << j){
                subset.push_back(arr[j]);
            }

        }
        allSubsets.push_back(subset);
    }
}

int main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> allSubsets;

    findSubset(arr, allSubsets);

    for(auto& i : allSubsets){
        for(int num : i){
            cout << num << " ";
        }
        cout << endl;
    }

    
}