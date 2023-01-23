// programmers_Lv.2_2 x n 타일링
#include <string>
#include <vector>

using namespace std;

long long dp[60001];

int solution(int n) {
    long long answer = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i-1]%1000000007 + dp[i-2]%1000000007;
    }
    answer = dp[n]%1000000007;
    return answer;
}