// BOJ_1337_올바른 배열
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int max_num = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = i+1; j < n; j++) {
            if (v[j] - v[i] < 5 && v[j] - v[i] > 0) {
                cnt++;
            }
            max_num = max(max_num, cnt);
        }
    }
    if (n == 1) {
        cout << 4;
        return 0;
    }
    if (max_num >= 5) {
        cout << 0;
    } else {
        cout << 5 - max_num;
    }
    return 0;
}