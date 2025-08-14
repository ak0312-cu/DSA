#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int t){
    
    if(low > high) return -1;
    
    int mid = low + (high - low) / 2;

    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return binarySearch(nums, mid+1, high, target);
    else return binarySearch(nums, low, mid-1, target);

}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    int low = 0, high = arr.size() - 1;
    int t = 30;

    cout << "Found at index: " << binarySearch(arr, low, high, t);
}