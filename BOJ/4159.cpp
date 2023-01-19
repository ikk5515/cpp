// BOJ_4159_알래스카
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;
    while(true) {
        int ans = 0;
        v.clear();
        bool flag = true;
        int n; cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size()-1; i++) {
            if ((v[i+1] - v[i]) > 200) {
                flag = false;
                break;
            }
            ans = v[i+1];
        }
        if (flag && (1422 - ans) <= 200 && ((1422 - ans)*2) < 200 ) {
            cout << "POSSIBLE" << "\n";
        } else {
            cout << "IMPOSSIBLE" << "\n";
        }
    }
    return 0;
}