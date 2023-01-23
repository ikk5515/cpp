// programmers_Lv.2_다음 큰 숫자
#include <string>
#include <bitset>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string chk = bitset<100>(n).to_string();
    
    int length = 0;
    for (int i = 0; i < chk.size(); i++) { 
        if (chk[i] == '1') {
            length++;
        }
    }
    int tmp = n+1;
    while(true) {
        string next = bitset<100>(tmp).to_string();
        int cnt = 0;
        for (int i = 0; i < next.size(); i++) {
            if (next[i] == '1') {
                cnt++;
            }
        }
        if (length == cnt) {
            answer = tmp;
            break;
        } else {
            tmp++;
        }
        
    }
    return answer;
}