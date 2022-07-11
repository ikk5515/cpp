//BOJ_5591_最大の和
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int max_s = 0;
    int arr[100001] = { 0, };
    int N, K;

    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        cin >> arr[i];
        max_s += arr[i];
    }

    int result = max_s;
    for (int i = K; i < N; i++) {
        cin >> arr[i];
        max_s += arr[i] - arr[i - K];
        result = max(result, max_s);
    }

    cout << result;
}