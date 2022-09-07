//BOJ_1292_쉽게_푸는_문제
#include <iostream>
using namespace std;

long long arr[1000001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int A, B;                   // 숫자의 범위
    int tmp = 0, number = 0;
    cin >> A >> B;
    int ans = 0;

    for (int i = 1; i <= 1000; i++) {
        number = tmp;
        tmp += i;
        for (int j = number; j < tmp; j++) {
            arr[j] = i;
        }
    }

    for (int i = 0; i < B; i++) {
        ans += arr[i];
    }

    for (int i = 0; i < A-1; i++) {
        ans -= arr[i];
    }

    cout << ans;
    return 0;
}