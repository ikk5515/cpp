// BOJ_12755_수면 장애
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    
    int ans = 0;
    int digit = 0;  // 자릿수
    int tot = 0;    // 1-9, 10-189, 190-2889
    int s_tot = 0;
    int cnt = 9;
    while(true) {
        if (tot >= n) {
            break;
        }
        digit++;
        s_tot = tot;
        tot += cnt * digit;
        cnt *= 10;
    }
    int idx = 0;
    int d = pow(10, digit-1);
    idx = n - (s_tot+1);
    ans = d + (idx/digit);

    int div = idx % digit;
    string result = to_string(ans);
    cout << result[div];
    return 0;
}