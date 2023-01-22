// BOJ_1065_한수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i < 100) {
            cnt++;
        } else {
            int a,b,c;
            a = i / 100;
            b = i % 100 / 10;
            c = i % 10;
            if (a - b == b - c) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}