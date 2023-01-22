// BOJ_1339_단어 수학
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int arr[27] = { 0, };
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int cnt = 1;
        string s; cin >> s;
        for (int j = s.size()-1; j >= 0; j--) {
            arr[s[j]-65] += cnt;
            cnt *= 10;
        }
    }
    sort(arr,arr+26, greater<int>());
    
    int first = 9;
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] == 0) {
            break;
        } else {
            ans += arr[i] * first--;
        }
    }
    cout << ans;
    return 0;
}