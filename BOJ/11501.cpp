//BOJ_11501_주식
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long ans;
    vector<int> v;
    int T; cin >> T;    // 테스트 케이스 개수 T

    for (int i = 0; i < T; i++) {
        v.clear();
        ans = 0;
        int n; cin >> n;        // 각 테스트 날

        for (int j = 0; j < n; j++) {
            int num; cin >> num;
            v.push_back(num);
        }

        int maxN = 0;
        for (int j = n-1; j >= 0; j--) {
            maxN = max(maxN, v[j]);
            ans += maxN-v[j];
        }
        cout << ans << "\n";
    }
    return 0;
}