#include<bits/stdc++.h>
using namespace std;

vector<int> unionArr(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int> res;

    int i = 0, j = 0;

    while(i < n && j < m){
        if(arr1[i] <= arr2[j]){
            if(res.size() == 0 || res.back() != arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;

        }

        else{
            if(res.back() != arr2[j]){
                res.push_back(arr2[j]);
            }
            j++;

        }
    }

    while(i < n){
        if(res.back() != arr1[i]){
            res.push_back(arr1[i]);
        }
        i++;
    }

    while(j < m){
        if(res.back() != arr2[j]){
            res.push_back(arr2[j]);
        }
        j++;
    }

    return res;
    
}


int main(){
    vector<int> arr1 = {1, 2, 3, 4, 5, 8, 10};
    vector<int> arr2 = {1, 2, 5, 7, 9, 10, 11};

    vector<int> res = unionArr(arr1, arr2);

    for(auto it : res){
        cout << it << " ";
    }

}