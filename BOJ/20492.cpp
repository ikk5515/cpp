// BOJ_20492_세금
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    int a = n * 0.78;
    int tmp = n * 0.2;
    tmp *= 0.78;
    int b = n * 0.8;
    b += tmp;

    cout << a << " " << b;
    return 0;
}