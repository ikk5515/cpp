// BOJ_10809_알파벳 찾기
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[26] = { 0, };
    std::fill(arr, arr+26, -1);
    string s; cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (arr[s[i] -'a'] == -1) {
            arr[s[i] - 'a'] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}