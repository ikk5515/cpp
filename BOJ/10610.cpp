//BOJ_10610_30
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    bool flag = false;
    long long result = 0, sNum;
    cin >> s;

    sort(s.begin(), s.end(), greater<int>());
    for (int i = 0 ; i < s.size(); i++) {
        sNum = int(s[i]) - '0';
        result += sNum;
        if (sNum == 0) {
            flag = true;
        }
    }
    if (result % 3 == 0 && flag == true) {
        cout << s << "\n";
    } else {
        cout << -1 << "\n";
    }
    return 0;
}