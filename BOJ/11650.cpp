//BOJ_11650_좌표_정렬하기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N = 0;
    int x = 0, y = 0;
    vector<pair<int, int>> xy;
    
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        xy.push_back(make_pair(x, y));
    }

    stable_sort(xy.begin(), xy.end());

    for (int i = 0; i < N; i++) {
        cout << xy[i].first << " " << xy[i].second << "\n";
    }
    return 0;
}