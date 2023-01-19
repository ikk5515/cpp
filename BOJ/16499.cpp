// BOJ_16499_동일한 단어 그룹화하기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<string> v;
    int n; cin >> n;
    bool flag[101] = { false, };

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        v.push_back(s);
    }
    sort(v.begin(), v.end());

    int ans =0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (v[i] == v[j] && flag[j] == false) {
                flag[j] = true;
                cnt++;
            }
        }
        if (cnt >= 1) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}