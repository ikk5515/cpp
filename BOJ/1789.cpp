//BOJ_1789_수들의_합
#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cnt = 0;
    long long S, N;
    long long dp[100001] = { 0, };
    
    cin >> S;

    dp[0] = 1;
    int i = 0;
    while (1)
    {
        if (N <= S) {
            dp[i+1] = dp[i]+1;
            N += dp[i];
            i++;
            cnt++;
        } else {
            cout << cnt-1 << "\n";
            break;
        }
    }
    return 0;
}