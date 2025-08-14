#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int dp[n+1]; 

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;

    return 0;
}
