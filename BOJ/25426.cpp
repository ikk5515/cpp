// BOJ_25426_일차함수들
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<long long, long long>a, pair<long long, long long>b) {
    if (a.first == b.first) {
        return a.second > b.second;
    } else {
        return a.first > b.first;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    vector<pair<long long, long long>> v;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(), v.end(), comp);

    long long ans = 0;
    int cnt = n;
    for (int i = 0; i < v.size(); i++) {
        ans += v[i].first * cnt + v[i].second;
        cnt--;
    }

    cout << ans << "\n";
    return 0;
}