//BOJ_2559_수열
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int max_R = 0, result = 0;
    int n, k;
    int arr[100001] = { 0, };
    
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        max_R += arr[i];
    }

    result = max_R;
    for (int i = k; i < n; i++) {
        cin >> arr[i];
        max_R += arr[i] - arr[i-k];
        result = max(result, max_R);
    }

    cout << result;
    return 0;
}