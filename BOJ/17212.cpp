//BOJ_17212_달나라 토끼를 위한 구매대금 지불 도움
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;  // 지불해야 하는 금액
    cin >> n;

    // 동전의 종류 1원, 2원, 5원, 7원
    int dp[100001] = { 0, };
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 2;
    dp[5] = 1;
    dp[6] = 2;
    dp[7] = 1;

    for (int i = 8; i <= n; i++) {
        dp[i] = min({dp[i-1], dp[i-2], dp[i-5], dp[i-7]})+1;
    }
    cout << dp[n];
    return 0;
}