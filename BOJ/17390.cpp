//BOJ_17390_이건_꼭_풀어야_해!
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, Q;               // 수열의 길이 N, 질문 개수 Q
    int a, b;               // 구간 a에서 b까지
    int tmp = 0;
    int sum[300001] = { 0, };            // 전체 합
    int arr[300001] = { 0, };
    cin >> N >> Q;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N+1);

    for (int i = 1; i <= N; i++) {
        tmp += arr[i];
        sum[i] += tmp;
    }
 
    for (int i = 0; i < Q; i++) {
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << "\n";
    }
    return 0;
}