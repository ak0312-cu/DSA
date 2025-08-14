#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int n, vector<int>& nums){
    int largest = nums[0], secondLargest = INT_MIN;
    for(int i = 1; i < n; i++){
        if(largest < nums[i]){
            largest = nums[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(nums[i] > secondLargest && nums[i] < largest){
            secondLargest = nums[i];
        }
    }
    return secondLargest;

}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << secondLargestElement(n, nums);
    
}