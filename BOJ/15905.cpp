//BOJ_15905_스텔라(STELLA)가_치킨을_선물했어요
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<pair<int,int>> v;        // 해결한 문제와 패널티 점수를 저장할 벡터
    int n;                          // 참가자 수
    int pr, sc;                     // 해결한 문제와 패널티 총합
    int cnt = 0;                    // 기프티콘 개수

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> pr >> sc;
        v.push_back(make_pair(pr, sc));
    }

    stable_sort(v.begin(), v.end(), comp);

    for (int i = 5; i <= n; i++) {
        if (v[4].first == v[i].first) {
            cnt++;    
        } else {
            break;
        }
    }
    cout << cnt << "\n";
    return 0;
}