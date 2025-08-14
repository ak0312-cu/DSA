#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end){
    if(start >= end) return;

    swap(arr[start], arr[end]);
    reverseArray(arr, start+1, end-1);
    return;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int start = 0, end = n-1;

    reverseArray(arr, start, end);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}