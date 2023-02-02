// BOJ_2744_대소문자 바꾸기
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cout.tie(NULL); cout.tie(NULL);
    
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] >= 65 && s[i] <= 90) {
            cout << (char)(s[i]+32);
        } else {
            cout << (char)(s[i]-32);
        }
    }
    return 0;
}