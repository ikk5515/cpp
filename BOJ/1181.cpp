// BOJ_1181_단어정렬
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<string> v;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (find(v.begin(), v.end(), s) == v.end()) {
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}