//BOJ_14495_피보나치 비스무리한 수열
#include <iostream>
using namespace std;

long long dp[120];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long n; cin >> n;
    dp[1] = dp[2] = dp[3] = 1;
    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-3];
    }
    cout << dp[n] << "\n";
    return 0;
}