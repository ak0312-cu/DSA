#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;

    for(int i = 0; i < n-2; i++){
        if(i > 0 && arr[i] == arr[i-1]) continue;
        int left = i+1, right = n-1;

        while (left < right){
            if(arr[i] + arr[left] + arr[right] == 0){
                res.push_back({arr[i], arr[left], arr[right]});
                left++;
                right--;

                while(left > right && arr[left] == arr[left-1]) left++;

                while(left > right && arr[right] == arr[right+1]) right--;
            }

            else if(arr[i] + arr[left] + arr[right] < 0) left++;

            else right--;
        }
    }

    return res;

}

int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};

    vector<vector<int>> res = threeSum(arr);

    for(auto it : res){
        for(int i : it){
            cout << i << " ";
        }
        cout << endl;
    }

}