// BOJ_9461_파도반 수열
#include <iostream>
using namespace std;

long long dp[101];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    for (int i = 5; i <= 100; i++) {
        dp[i] = dp[i-2] + dp[i-3];
    }

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        cout << dp[tmp] << "\n";
    }
    return 0;
}