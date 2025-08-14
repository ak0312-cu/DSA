#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter no.: ";
    cin >> n;

    string s = bitset<8>(n).to_string();
    cout<<"Binary form: "<<s<<endl;

    n = n & (n-1);

    s = bitset<8>(n).to_string();
    cout<<"Binary form after removing last set bit: "<<s<<endl;

    cout << "After removing last set bit "<< n;
}