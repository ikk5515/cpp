//BOJ_11971_속도 위반
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> lim, spd;
    int n, m; cin >> n >> m;
    int ans = 0;

    for (int i = 0 ; i < n; i++) {
        int li, sp; cin >> li >> sp;
        for (int j = 0; j < li; j++) {
            lim.push_back(sp);
        }
    }

    for (int i = 0 ; i < m; i++) {
        int li, sp; cin >> li >> sp;
        for (int j = 0; j < li; j++) {
            spd.push_back(sp);
        }
    }

    for (int i = 0; i < 100; i++) {
        ans = max(ans, spd[i] - lim[i]);
    }
    cout << ans << "\n";
    return 0;
}