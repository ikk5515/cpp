//BOJ_1920_수_찾기
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    int number;

    cin >> N;           // 처음 입력받을 N개의 수를 입력
    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> number;      // N만큼 입력받은 수를 arr배열에 넣어줌
        arr[i] = number;
    }
    sort(arr, arr + N);      // arr배열을 정렬해줌
    
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> number;
        if (binary_search(arr, arr+N, number)) {
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }
    return 0;
}