//BOJ_1026_보물
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr1[51] = {0,};
    int arr2[51] = {0,};
    int n, res = 0, ans = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    sort(arr1, arr1+n);
    sort(arr2, arr2+n, greater<int>());


    for (int i = 0; i < n; i++) {
        res = arr1[i]*arr2[i];
        ans += res;
    }
    cout << ans << "\n";
    return 0;
}