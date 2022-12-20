//BOJ_2546_경제학과 정원영
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;    // 테스트 케이스
    int N, M;           // C언어 수강생의 수 N과 경제학 원론 수강생의 수 M
    long double sumC, sumE;

    for (int i = 0; i < n; i++) {
        cin >> N >> M;
        int count = 0;
        int arr[200001] = { 0, };
        sumC = 0.0, sumE = 0.0;

        for (int j = 0; j < N; j++) {
            cin >> arr[j];
            sumC += arr[j];
        }

        for (int j = 0; j < M; j++) {
            int Enum; cin >> Enum;
            sumE += Enum;
        }
        sumC /= N;
        sumE /= M;

        for (int j = 0; j < N; j++) {
            if (arr[j] < sumC && arr[j] > sumE) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}