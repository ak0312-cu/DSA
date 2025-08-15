#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int t){
    int n = arr.size();
    unordered_map<int,int> mp;
    vector<int> res;

    for(int i = 0; i < n; i++){
        int complement = t - arr[i];
        if(mp.find(complement) != mp.end()){
            res.push_back(i);
            res.push_back(mp[complement]);
        }
        else{
            mp[arr[i]] = i;
        }
    }

    return res;
}


int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;

    vector<int> res = twoSum(arr, target);

    for(auto it : res){
        cout << it << " ";
    }

}