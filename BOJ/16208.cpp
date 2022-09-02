//BOJ_16208_귀찮음
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, number;
    long long xy = 0, tmp = 0;
    long long ans = 0;
    long long length;
    long long arr[500001] = { 0, }; 

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> number;
        arr[i] = number;
    }

    sort(arr, arr + n, greater<int>());
    
    for (int i = 0; i < n; i++) {
        tmp += arr[i];
    }

    for (int i = 0; i < n; i++) {
        length = arr[i];
        tmp -= length;
        xy = length * tmp;
        ans += xy;
    }

    cout << ans << "\n";
    return 0;
}