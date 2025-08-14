#include<bits/stdc++.h>
using namespace std;

int sumNNumbers(int c, int n){
    if(c == n) return n;
    return c + sumNNumbers(c+1, n);
}

int main(){
    int n;
    cin >> n;

    int c = 1;

    cout << sumNNumbers(c, n);
}