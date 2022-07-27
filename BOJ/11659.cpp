//BOJ_11659_구간_합_구하기_4
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int sum[100001] = { 0, };
    int N, M;       // 개수 N, 합을 구해야 하는 횟수 M
    int a, b, tmp = 0;        // 구간 a와b      입력받은 값을 계속 더해줄 tmp변수

    cin >> N >> M;

    int number;
    for (int i = 1; i <= N; i++) {
        cin >> number;
        tmp += number;          //구간 a,b의 합은 sum[b] - sum[a-1]
        sum[i] += tmp;              
    }

    for (int i = 1; i <= M; i++) {
        cin >> a >> b;
        cout << sum[b] - sum[a-1] << "\n";
    }
    return 0;
}