#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout << "Enter no.: ";
    cin >> n;

    string s = bitset<8>(n).to_string();
    cout<<"Binary form: "<<s<<endl;;

    cout << "Enter bit to set: ";
    cin >> m;

    n = n | 1 << m;

    cout << "After setting "<<m<<"th bit: "<< n;
}