#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    int N;
    cin >> N;       // 회원 수를 입력받음
    vector <pair<int, string>> v(N);

    for (int i = 0; i < N; i++) {       // 회원 수만큼 나이와 이름을 입력받음
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(), v.end(), compare);       // 여러 값들을 정렬하기 위해 stable_sort 이용
    
    for (int i = 0; i < N; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}