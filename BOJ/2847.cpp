// BOJ_2847_게임을 만든 동준이
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }

    int num = v.size()-1;
    int cnt = 0;
    while (num > 0) {
        if (v[num-1] >= v[num]) {
            v[num-1]--;
            cnt++;
        } else {
            num--;
        }
    }
    cout << cnt; 
    return 0;
}