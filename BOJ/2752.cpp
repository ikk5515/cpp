//BOJ_2752_세수정렬
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[4] = { 0, };
    int N = 3;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}