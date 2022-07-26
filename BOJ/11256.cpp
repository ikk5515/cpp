//BOJ_11256_사탕
#include <iostream>
#include <algorithm>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;      // 테스트 케이스 개수
    int J, N;   // 사탕의 개수 J, 상자의 개수 N;
    int R, C;   // 상자의 세로 길이 R, 가로길이 C
    int result;     // 필요한 상자의 개수
    int arr[10001] = { 0, };

    cin >> T;
    for (int i = 0; i < T; i++) {
        result = 0;
        cin >> J >> N;
        for (int j = 0; j < N; j++) {
            cin >> R >> C;
            arr[j] = R * C;
        }
        sort(arr, arr + N, greater<int>());
        
        for (int k = 0; k < N; k++) {
            if (J > 0) {
                J -= arr[k];
                result++;
            }
            else {
                break;
            }
        }
        cout << result << "\n";
    }
    return 0;
}