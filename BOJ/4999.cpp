// BOJ_4999_아!
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s, str; cin >> s >> str;
    if (s.size() >= str.size()) {
        cout << "go";
    } else {
        cout << "no";
    }
    return 0;
}