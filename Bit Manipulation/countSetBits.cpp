#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter no.: ";
    cin >> n;

    string s = bitset<8>(n).to_string();
    cout<<"Binary form: "<<s<<endl;

    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1') cnt++;
    }

    cout << "No. of set bits: " << cnt; 

}

// while(n != 0){
//     n = n & (n-1);
//     cnt++
// }