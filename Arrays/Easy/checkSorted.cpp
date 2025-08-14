#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int n, vector<int>& nums){
    for(int i = 0; i < n-1; i++){
        if(nums[i] > nums[i+1]) return false;
    }

    return true;

}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    if(checkSorted(n, nums)){
        cout << "Sorted array";
    }
    else{
        cout << "Unsorted array";
    }
}