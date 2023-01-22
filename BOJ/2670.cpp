// BOJ_2670_연속부분최대곱
#include <iostream>
using namespace std;

double dp[10001];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> dp[i];
    }

    double max_num = 0.0;
    for (int i = 1; i <= n; i++) {
        double result = 1.0;
        for (int j = i; j <= n; j++) {
            result *= dp[j];
            if (result > max_num) {
                max_num = result;
            }
        }
    }
    cout << fixed; cout.precision(3);
    cout << max_num;

    return 0;
}