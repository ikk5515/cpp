// BOJ_1487_물건 팔기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n; cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int price, shipping; cin >> price >> shipping;
        v.push_back(make_pair(price,shipping));
    }

    sort(v.begin(), v.end());

    int max_num = 0;
    int chk = 0;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = i; j < n; j++) {
            int tmp = v[i].first - v[j].second;     // 물건 값을 책정했을 때, 그 값보다 비싸게 사는 사람을 전부 확인
            if (tmp > 0) {
                total += tmp;
            }
        }
        if (total > chk) {
            chk = total;
            max_num = v[i].first;
        }
    }
    cout << max_num;
    return 0;
}