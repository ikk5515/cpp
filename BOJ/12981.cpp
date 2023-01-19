// BOJ_12981_공 포장하기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int a, b, c; cin >> a >> b >> c;

    int cnt = 0;

    for (int i = 0; i < 100; i++) {
        if (a < 3 && b < 3 && c < 3) {
            break;
        }
        if (a >= 3) {
            cnt++;
            a -= 3;
        }
        if (b >= 3) {
            cnt++;
            b -= 3;
        }
        if (c >= 3) {
            cnt++;
            c -= 3;
        }
    }

    for (int i = 0; i < 100; i++) {
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        if (a > 0 && b > 0 && c > 0) { 
            cnt++;
            a -= 1;
            b -= 1;
            c -= 1;
        } else if (a > 0 && b > 0 && c == 0) {
            cnt++;
            a -= 1;
            b -= 1;
        } else if (a > 0 && b == 0 && c > 0) {
            cnt++;
            a -= 1;
            c -= 1;
        } else if (a == 0 && b > 0 && c > 0) {
            cnt++;
            b -= 1;
            c -= 1;
        } else if (a > 0 && b == 0 && c == 0) {
            cnt++;
            if (a > 1) {
            a -= 2;
            } else {
                a -= 1;
            }
        } else if (a == 0 && b > 0 && c == 0) {
            cnt++;
            if (b > 1) {
            b -= 2;
            } else {
                b -= 1;
            }
        } else if (a == 0 && b == 0 && c > 0) {
            cnt++;
            if (c > 1) {
            c -= 2;
            } else {
                c -= 1;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}