//BOJ_11053_가장_긴_감소하는_부분_수열
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;      // 수열의 크기 N
    int A[1001] = { 0, };
    int dp[1001] = { 0, };
    int ans = 1;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    dp[0] = 1;
    for (int i = 1; i < N; i++) {
        dp[i] = 1;      // 1번째 값이 가지는 가장 긴 증가하는 부분 수열의 길이 = 1  
        for (int j = 0; j < i; j++) {
            if (A[i] < A[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        ans = max(dp[i], ans);
    }
    cout << ans << "\n";
    return 0;
}