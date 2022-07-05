//BOJ_11004_K번째_수
#include <cstddef>
#include <ios>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int *arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    cout << arr[M-1];
    delete[] arr;
    return 0;
}