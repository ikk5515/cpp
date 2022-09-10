//BOJ_2217_로프
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;      // N개의 로프
    int arr[100001] = { 0, };       // 입력한 전체 로프의 굵기를 저장할 배열
    int tmp = 0;
    int ans = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+N, greater<int>());       // 내림차순으로 정렬

    ans = arr[0];                           // 처음 최대 중량은 내림차순으로 정렬된 배열의 시작값
    for (int i = 1 ; i < N; i++) {
        tmp = ((i+1) * arr[i]);
        ans = max(tmp, ans);
    }

    cout << ans << "\n";
    return 0;
}