// programmers_Lv.1_숫자 문자열과 영단어
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string str;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > 47 && s[i] < 58) {
            str += (char)s[i];
        } else {
            if (s[i] == 'z') {
                str += "0";
                s.erase(0, 3);
            } else if (s[i] == 'o') {
                str += "1";
                s.erase(0,2);
            } else if (s[i] == 't') {
                if (s[i+1] == 'w'){
                    str += "2";
                    s.erase(0,2);
                } else if (s[i+1] == 'h') {
                    str += "3";
                    s.erase(0,4);
                }
            } else if (s[i] == 'f') {
                if (s[i+1] == 'o') {
                    str += "4";
                    s.erase(0,3);
                } else if(s[i+1] == 'i'){
                    str += "5";
                    s.erase(0,3);
                }
            } else if (s[i] == 's') {
                if (s[i+1] == 'i') {
                    str += "6";
                    s.erase(0,2);
                } else if (s[i+1] == 'e') {
                    str += "7";
                    s.erase(0,4);
                }
            } else if (s[i] == 'e') {
                str += "8";
                s.erase(0,4);
            } else if (s[i] == 'n') {
                str += '9';
                s.erase(0,3);
            }
        }
    }
    answer = stoi(str);
    return answer;
}