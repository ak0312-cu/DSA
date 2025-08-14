#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int>& wt, vector<int>& val, int w, int n, vector<vector<int>>& dp){
    
    if(w == 0 || n == 0) return 0;

    if(dp[n][w] != -1) return dp[n][w];

    if(wt[n - 1] <= w){
        dp[n][w] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1, dp), knapsack(wt, val, w, n - 1, dp));
        return dp[n][w];
    }

    else{
        dp[n][w] = knapsack(wt, val, w, n - 1, dp);
        return dp[n][w];
    }
}

int main(){
    int n, W;

    cout << "Enter no. of Items: ";
    cin >> n;
    cout << "Enter weight of Knapsack: ";
    cin >> W;

    vector<int> wt(n);
    vector<int> val(n);

    for(int i = 0; i < n; i++){
        cout << "Enter weight of Item "<<i+1<<": ";
        cin >> wt[i];
        cout << "Enter value of Item "<<i+1<<": ";
        cin >> val[i];
        
    }
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));

    cout << "Max value: " << knapsack(wt, val, W, n, dp);

}