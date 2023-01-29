// BOJ_17614_369
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] % 3 == 0 && s[i] != '0') {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}