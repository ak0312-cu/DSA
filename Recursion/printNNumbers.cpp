#include<bits/stdc++.h>
using namespace std;

void printNNumbers(int c, int n){
    if (c > n) return;
    cout << c << endl;
    c++;
    printNNumbers(c, n);
}

int main(){
    int n;
    cin >> n;

    int c = 1;

    printNNumbers(c, n);
}