// BOJ_8394_약수
#include <iostream>
using namespace std;

int dp[10000001];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 5;

    for (int i = 5; i <= 10000000; i++) {
        dp[i] = (dp[i-1]%10 + dp[i-2]%10)%10;
    }

    cout << dp[n];
    return 0;
}