// BOJ_20162_간식 파티
#include <iostream>
#include <vector>
using namespace std;

int dp[1001];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    vector<int> v;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }

    int temp = 0;
    int ans = 0;

    dp[0] = v[0];
    ans = dp[0];
    for (int i = 1; i < v.size(); i++) {
        dp[i] = v[i];
        for (int j = 0; j < i; j++) {
            if (v[i] > v[j]) {
                dp[i] = max(dp[i], dp[j]+v[i]);
            }
        }
        ans = max(ans, dp[i]);
    }
    
    cout << ans << "\n";
    return 0;
}