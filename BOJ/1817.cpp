//BOJ_1817_짐_챙기는_숌
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N, M;       // 책의 개수 N, 최대 무게 M
    vector<int> vec;
    cin >> N >> M;
    if (N == 0) {
        cout << 0 << "\n";
        return 0;
    }

    int weight;
    for (int i = 0; i < N; i++) {
        cin >> weight;
        vec.push_back(weight);
    }

    int tmp = M, ans = 1;
    for (int i = 0; i < N; i++) {
        if (tmp >= vec[i]) {
            tmp -= vec[i];
        } else if (tmp < vec[i]) {
            tmp = M;
            tmp -= vec[i];
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}