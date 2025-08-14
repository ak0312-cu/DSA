#include<bits/stdc++.h>
using namespace std;

void fibonacci(int first, int second, int n, int count){
    if(n == 0) {
        cout << "Invalid";
        return;
    }
    if(n == 1) {
        cout << first;
        return;
    }
    
    cout << first + second << " ";
    count += 1;
    if(count == n) return;
    fibonacci(second, first+second, n, count);
}

int main(){
    int n;
    cin >> n;

    int first = 0, second = 1, count = 2;

    if(n > 1) cout << first << " " << second << " ";

    fibonacci(first, second, n, count);
}