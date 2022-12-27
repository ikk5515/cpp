//BOJ_11655_ROT13
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string s; getline(cin, s);
    string ans;
    char temp;
    for (int i = 0 ; i < s.size(); i++) {
        bool flag = true;
        if (65 <= s[i] && s[i] <= 90) {
            if (s[i]+13 > 90) {
                temp = (s[i]+13) - 90;
                ans.push_back(temp+64);
                flag = false;
            } else {
                ans.push_back(s[i]+13);
                flag = false;
            }
        }
        if (97 <= s[i] && s[i] <= 122) {
            if (s[i]+13 > 122) {
                temp = (s[i]+13) - 122;
                ans.push_back(temp+96);
                flag = false;
            } else {
                ans.push_back(s[i]+13);
                flag = false;
            }
        }
        if (flag) {
            ans.push_back(s[i]);
        }
    }
    cout << ans << "\n";
    return 0;
}