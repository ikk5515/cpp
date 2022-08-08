//층간소음
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    int arr[101] = { 0, };
    int ans = 0, cnt = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > m) {
            cnt++;
        } else {
            cnt = 0;
        }
        ans = max(ans, cnt);
    }
    if (ans > 0) {
        cout << ans << "\n";
    } else {
        cout << -1 << "\n";
    }
    return 0;
}