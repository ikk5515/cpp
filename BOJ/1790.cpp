// BOJ_1790_수 이어쓰기 2
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long n, k; cin >> n >> k;

    long long ans = 0;
    long long digit = 1;
    long long cnt = 9;

    while(k > (digit * cnt)) {  // 자릿수를 늘려가며 범위만큼 빼줌 => 9, 180, 2700
        k -= (digit * cnt);
        ans += cnt;
        digit++;
        cnt *= 10;
    }
    ans = (ans + 1) + (k - 1) / digit;  // 어느 수에 속하는지 확인 => k / 지금까지 자리수 => 더해줌
    if (ans > n) {
        cout << -1;
    } else {
        string result = to_string(ans);
        cout << result[(k-1)%digit];
    }
    return 0;
}