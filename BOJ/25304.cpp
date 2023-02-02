// BOJ_25304_영수증
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int total; cin >> total;
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        ans += a * b;
    }
    if (ans == total) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}