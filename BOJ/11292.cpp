//BOJ_11292_키 큰 사람
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool Desc(pair<string, double> a, pair<string, double> b) {
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    while (true) {
        int n; cin >> n;
        if (n == 0) {
            break;
        }
        vector<pair<string, double>> v;
        for (int i = 0; i < n; i++) {
            string name;
            double height;
            cin >> name >> height;
            v.push_back({name,height});
        }
        stable_sort(v.begin(), v.end(), Desc);

        for (int i = 0 ; i < n; i++ ) {
            if (v[0].second == v[i].second) {
                cout << v[i].first << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}