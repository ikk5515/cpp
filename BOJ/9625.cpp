//BOJ_9625_BABBA
#include <iostream>
using namespace std;

int a[46];
int b[46];

int main() {
    int n = 0;
    a[0] = 1;
    b[0] = 0;
    a[1] = 0;
    b[1] = 1;

    cin >> n;
    for (int i = 2; i <= n; i++) {      // 다이나믹 프로그래밍
        a[i] = a[i-1] + a[i-2];
        b[i] = b[i-1] + b[i-2];
    }
    cout << a[n] << " "<< b[n];
    return 0;
}