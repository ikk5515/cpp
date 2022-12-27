//BOJ_1259_팰린드롬수
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    while (true) {
        int n; cin >> n;
        if (n == 0) {
            break;
        }
        string s = to_string(n);
        int count = s.length()-1;
        bool flag = false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == s[count--]) {
                continue;
            } else {
                flag = true;
            }
        }
        if (flag) {
            cout << "no" << "\n";
        } else {
            cout << "yes" << "\n";
        }
    }
    
    return 0;
}