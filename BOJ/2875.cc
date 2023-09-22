#include<iostream>
#include<cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m, k; cin >> n >> m >> k;
    int tmp = min(n / 2, m);

    int s = n + m - (2 * tmp + tmp);

    if (k <= s) {
        cout << tmp;
    }
    else {
        tmp = tmp - ((k - s + 2) / 3);
        cout << tmp;
    }
    return 0;
}
