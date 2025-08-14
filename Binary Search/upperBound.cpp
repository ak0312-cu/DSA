#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& arr, int t){
    int low = 0, high = arr.size() - 1;
    int ans = arr.size();

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] > t){
            ans = mid;
            high = mid - 1;
        } 
        else low = mid + 1;
    }


    return ans;
}

int main(){
    vector<int> arr = {11,15,21,30,32,35,46,47,53,59,60};

    int t = 32;

    cout << "Upper Bound of " << t << " is " << upperBound(arr, t);
}