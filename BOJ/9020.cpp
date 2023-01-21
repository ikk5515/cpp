// BOJ_9020_골드바흐의 추측
#include <iostream>
#include <cmath>
using namespace std;

bool prime[10001];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    prime[0] = prime[1] = true;
    for (int i = 2; i < sqrt(10001); i++) {
        if (!prime[i]) {
            for (int j = i+i; j <= 10000; j+=i) {
                prime[j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        int first, second;
        first = second = num / 2;
        while(true) {
            if(!prime[first] && !prime[second]) {
                if ((first + second) == num) {
                    cout << first << " " << second << "\n";
                    break;
                }
            } else {
                first--;
                second++;
            }
        }
    }
    return 0;
}