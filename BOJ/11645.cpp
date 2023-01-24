// BOJ_11645_I’ve Been Everywhere, Man
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    set<string> str;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        str.clear();
        string s;
        int m; cin >> m;
        int cnt = 0;
        for (int j = 0; j < m; j++) {
            cin >> s;
            str.insert(s);
        }
        cout << str.size() << "\n";
    }
    return 0;
}