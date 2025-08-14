#include<bits/stdc++.h>
using namespace std;

int largestElement(int n, vector<int>& nums){
    int largest = nums[0];
    for(int i = 1; i < n; i++){
        if(largest < nums[i]){
            largest = nums[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << largestElement(n, nums);
    
}