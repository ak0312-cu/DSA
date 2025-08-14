#include<bits/stdc++.h>
using namespace std;

int noOfWays(int n){
    if(n == 0) return 1;
    if(n < 0) return 0;
    
    int w = 0;

    for(int i = 1; i <= 6; i++){
        w = w + noOfWays(n - i) ;
    }
    return w;
}

int main(){
    int n;
    cin >> n;

    int sol = noOfWays(n);
    cout<< sol;
}