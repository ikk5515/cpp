// BOJ_5341_Pyramids
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    while(true) {
        int n; cin >> n;
        if (n == 0) {
            break;
        }

        int sum =0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << sum << "\n";
    }
    return 0;
}