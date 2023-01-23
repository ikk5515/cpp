// programmers_Lv.1_가운데 글자 가져오기
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.size() / 2;
    if (s.size() % 2 == 0) {
        answer = s[len-1];
        answer += s[len];
    } else {
        answer = s[len];
    }
    return answer;
}