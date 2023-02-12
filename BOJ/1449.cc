// BOJ_1449_수리공 항승
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;
    int n, l; cin >> n >> l;
    
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    int ans = 0;
    int now = v[0];
    int tmp = 1;
    bool flag = true;
    if (l == 1) {
        cout << n;
        return 0;
    } else {
        while (true) {
            if (v[tmp] - now < l) {
                tmp++;
                flag = true;
            } else {
                now = v[tmp];
                tmp++;
                ans++;
                flag = false;
            }
            if (tmp > n) {
                break;
            }
        }
    }
    if (flag) {
        ans++;
    }
    cout << ans;
    return 0;
}