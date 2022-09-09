//BOJ_11728_배열_합치기
#include <iostream>
#include <algorithm>
using namespace std;

int arr[2000010];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B;       // A, B 배열의 크기
    int number;

    cin >> A >> B;
    for (int i = 0; i < A; i++) {
        cin >> arr[i];
    }

    for (int i = A; i < A+B; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+(A+B));

    for (int i = 0; i < A+B; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}