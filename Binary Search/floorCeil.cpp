#include<bits/stdc++.h>
using namespace std;
pair<int, int> floorCeil(vector<int>& arr, int t){
    int low = 0, high = arr.size() - 1;
    int floor = -1, ceil = arr.size();

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == t){
            ceil = arr[mid];
            floor = arr[mid];
        }
        else if(arr[mid] > t){
            ceil = arr[mid];
            high = mid - 1;
        }
        else{
            floor = arr[mid];
            low = mid + 1;
        }
    }

    return {floor, ceil};

}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int t;
    cin >> t;

    pair<int, int> ans = floorCeil(arr, t);

    cout << "Floor value: " << ans.first << " & Ceil value: " << ans.second;


}