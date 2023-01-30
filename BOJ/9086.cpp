// BOJ_9086_문자열
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s.size() == 1) {
            cout << s << s << "\n";
        } else {
            cout << s[0] << s[s.size()-1] << "\n";
        }
    }
    return 0;
}