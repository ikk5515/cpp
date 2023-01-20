// BOJ_23560_약
#include <iostream>
using namespace std;

int dp[101];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n; cin >> n;
    dp[1] = 2;
    dp[2] = 6;

    for (int i = 3; i <= 15; i++) {
        dp[i] = (dp[i-1] * 4) - dp[i-1];
    }

    cout << dp[n] << "\n";
}

