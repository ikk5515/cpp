// BOJ_2502_떡 먹는 호랑이
#include <iostream>
using namespace std;

int a[31], b[31];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int d, k; cin >> d >> k;    // 넘어온 날 d, 호랑이에게 준 떡의 개수 k
    a[1] = 1, a[2] = 0;
    b[1] = 0, b[2] = 1;

    for (int i = 3; i <= d; i++) {
        a[i] = a[i-1] + a[i-2];
        b[i] = b[i-1] + b[i-2];
    }

    for (int i = 1; i <= k; i++) {
        if ((k-(a[d]*i)) % b[d] == 0) {
            cout << i << "\n" << (k-a[d]*i) / b[d];
            break;
        }
    }
    return 0;

}