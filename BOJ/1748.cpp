// BOJ_1748_수 이어쓰기 1
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i *= 10) {
        ans += n - i + 1;
    }

    cout << ans;
    return 0;
}