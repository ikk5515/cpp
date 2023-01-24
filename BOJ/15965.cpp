// BOJ_15965_K번째 소수
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool prime[7368788];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    long long n; cin >> n;

    prime[0] = prime[1] = true;

    for (int i = 2; i < sqrt(7368787); i++) {
        if (!prime[i]) {
            for (int j = i+i; j <= 7368787; j+=i) {
               prime[j] = true;
            }
        }
    }

    long long cnt = 1;
    for (int i = 2; i <= 7368787; i++) {
        if (!prime[i]) {
            if (cnt == n) {
                cout << i;
                return 0;
            }
            cnt++;
        }
    }
    return 0;
}