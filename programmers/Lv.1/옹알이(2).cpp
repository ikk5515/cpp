// programmers_Lv.1_옹알이(2)

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) { 
    bool flag = true;
    int answer = 0;
    int cnt = 0;
    for (int i = 0; i < babbling.size(); i++) {
        string s = babbling[i];
        flag = true;
        cnt = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'a' && s[j+1] == 'y' && s[j+2] == 'a') {
                s.erase(0, 2);
                if (cnt == 1) {
                    flag = false;
                    break;
                }
                cnt = 1;
            } else if (s[j] == 'y' && s[j+1] == 'e') {
                s.erase(0, 1);
                if (cnt == 2) {
                    flag = false;
                    break;
                }
                cnt = 2;
            } else if (s[j] == 'w' && s[j+1] == 'o' && s[j+2] == 'o') {
                s.erase(0, 2);
                if (cnt == 3) {
                    flag = false;
                    break;
                }
                cnt = 3;
            } else if (s[j] == 'm' && s[j+1] == 'a') {
                s.erase(0, 1);
                if (cnt == 4) {
                    flag = false;
                    break;
                }
                cnt = 4;
            } else {
                flag = false;
                break;
            }
        }
        if (flag) {
            answer++;
        }
    }
    return answer;
}