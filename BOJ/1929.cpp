// BOJ_1929_소수 구하기
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool prime[10000001];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int m, n; cin >> m >> n;
    
    prime[0] = prime[1] = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (!prime[i]) {
            for (int j = i+i; j <= n; j+=i) {
                prime[j] = true;
            }
        }
    }

    for (int i = 1 ; i <= n; i++) {
        if (!prime[i]) {
            if (i < m) continue;
            cout << i << "\n";
        }
    }
    return 0;
}