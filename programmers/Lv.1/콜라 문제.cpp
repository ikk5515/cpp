// programmers_Lv.1_콜라 문제
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    while(true) {
        if (n < a) {
            break;
        }else if (n >= a) {
            n -= a;
            n += b;
            answer += b;
        }
    }
    return answer;
}