#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int> arr = {2, 3, 7, 8, 10};
    int sum = 11;
    int n = arr.size();

    // DP table initialization
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0) dp[i][j] = false;

            if(j == 0) dp[i][j] = true;
        }
    }

    // Fill the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (arr[i - 1] <= j)
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    // Output the result
    if (dp[n][sum])
        cout << "Yes, subset with sum " << sum << " exists." << endl;
    else
        cout << "No, subset with sum " << sum << " doesn't exist." << endl;

    return 0;
}
