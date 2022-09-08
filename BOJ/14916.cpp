//BOJ_14916_거스름돈
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    int cnt = 0;

    cin >> n;
    if (n < 2) {
        cout << -1 << "\n";
        return 0;
    }
    cnt += n/5;
    n %= 5;
    while (n % 2 != 0 && cnt > 0) {
            cnt--;
            n += 5;
    }
    cnt += n/2;
    n %= 2;
    if (cnt > 0 && n == 0) {
        cout << cnt << "\n";
    } else {
        cout << -1 << "\n";
    }
    return 0;
}