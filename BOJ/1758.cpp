// BOJ_1758_알바생 강호
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    vector<int> v;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end(), greater<int>());

    long long ans = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = v[i] - i;
        if (result < 0) {
            continue;
        } else {
            ans += result;
        }
    }
    cout << ans;
    return 0;
}