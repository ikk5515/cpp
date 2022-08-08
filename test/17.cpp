//선생님 퀴즈
#include <iostream>
using namespace std;

int main() {
    int n, m, ans = 0;
    int arr[11] = { 0, };

    cin >> n;
    for (int i = 0; i < n; i++) {
        ans = 0;
        cin >> m >> arr[i];
        for (int j = 1; j <= m; j++) {
            ans += j;
        }
        if (arr[i] == ans) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}