//BOJ_26215_눈 치우기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int count = 0;
    vector<int> v;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);  
    }

    if (n == 1) {
        if (v[0] > 1440) {
            cout << -1 << "\n";
            return 0;
        } else {
            cout << v[0] << "\n";
            return 0;
        }
    }
    while (true) {
        sort(v.begin(), v.end());  
        if (v[n-1] == 0) {
            break;
        }
        v[n-1]--;
        if (v[n-2] != 0) {
            v[n-2]--;
        }
        count++;
        if (count > 1440) {
            cout << -1 << "\n";
            return 0;
        }
    }
    cout << count << "\n";
    return 0;
}