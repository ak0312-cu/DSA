#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr = {6,7,8,9,0,1,2,3,4,5};
    auto t = min_element(arr.begin(), arr.end());

    cout << distance(arr.begin(), t);

}