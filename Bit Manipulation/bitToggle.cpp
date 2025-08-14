#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout << "Enter no.: ";
    cin >> n;

    string s = bitset<8>(n).to_string();
    cout<<"Binary form: "<<s<<endl;

    cout << "Enter bit to toggle: ";
    cin >> m;

    n = n ^ (1 << m);

    s = bitset<8>(n).to_string();
    cout<<"Binary form after toggling: "<<s<<endl;

    cout << "After toggling "<<m<<"th bit: "<< n;
}