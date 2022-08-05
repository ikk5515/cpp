//BOJ_16237_이삿짐센터
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int a,b,c,d,e;
     int cnt = 0;

     cin >> a >> b >> c >> d >> e;

     while (1)
     {
        if (a >= 1 && d >= 1) {
            a -= 1; d -= 1;
            cnt++;
            continue;
        } if (d > 0) {
            cnt += d;
            d = 0;
        } if (b >= 1 && c >= 1) {
            b -= 1; c -= 1;
            cnt++;
            continue;
        }if (a >= 2 && c >= 1) {
            c -= 1; a -= 2;
            cnt++;
            continue;
        } if (a >= 1 && c >= 1) {
            c -= 1; a -= 1;
            cnt++;
            continue;
        } if (c > 0) {
            cnt += c;
            c = 0;
            continue;
        } if (a >= 1 && b >= 2) {
            b -= 2; a -= 1;
            cnt++;
            continue;
        } if (a >= 3 && b >= 1) {
            a -= 3; b -= 1;
            cnt++;
            continue;
        }
        if (b >= 2) {
            b -= 2;
            cnt++;
            continue;
        } if (a >= 2 && b >= 1) {
            a -= 2; b -= 1;
            cnt++;
            continue;
        } if (a >= 1 && b >= 1) {
            a -= 1; b -= 1;
            cnt++;
            continue;
        } if (b >= 1) {
            b -= 1;
            cnt++;
        } if (a >= 5) {
            a -= 5;
            cnt++;
            continue;
        } if (a < 5 && a > 0) {
            a = 0;
            cnt++;
            continue;
        }
        if (e > 0) {
            cnt += e;
            e = 0;
            continue;
        }
        if (a==0 && b==0 && c==0 && d==0 && e==0) {
            break;
        }
     }
     cout << cnt;
     return 0;
}