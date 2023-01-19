// BOJ_16471_작은 수 내기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> Ju, Sa;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int card; cin >> card;
        Ju.push_back(card);
    }

    for (int i = 0; i < n; i++) {
        int card; cin >> card;
        Sa.push_back(card);
    }

    sort(Ju.begin(), Ju.end());
    sort(Sa.begin(), Sa.end());


    int cnt = 0;
    int temp = 0;
    for (int i = 0; i < (n/2)+1; i++) {
        if (Ju[i] < Sa[(n/2)+i]) {
            cnt++;
        }
    }
    if (cnt >= (n/2)+1) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}