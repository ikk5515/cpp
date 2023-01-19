// BOJ_17254_키보드 이벤트
#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

bool comp(tuple<int,int,char>q, tuple<int,int,char>p) {
    if (get<1>(q) == get<1>(p)) {
        return get<0>(q) < get<0>(p);
    } else {
        return get<1>(q) < get<1>(p);
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<tuple<int,int,char>> v3;

    int N, M; cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        char c;
        cin >> a >> b >> c;
        v3.push_back(make_tuple(a,b,c));
    }

    sort(v3.begin(), v3.end(), comp);

    for (int i = 0; i < v3.size(); i++) {
        cout << get<2>(v3[i]);
    }
    return 0;
}