//BOJ_10769_행복한지 슬픈지
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    int happy = 0;
    int sad = 0;

    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ':') {
            if (s[i+1] == '-') {
                if (s[i+2] == ')') {
                    happy++;
                } else if (s[i+2] == '(') {
                    sad++;
                }
            }
        }
    }
    if (happy > sad) {
        cout << "happy" << "\n";
    } else if (sad > happy) {
        cout << "sad" << "\n";
    } else if (happy == sad && happy != 0) {
        cout << "unsure" << "\n";
    } else {
        cout << "none" << "\n";
    }
    return 0;
}