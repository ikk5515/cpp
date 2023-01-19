// programmers_Lv.1_없는 숫자 더하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());

    
    for (int i = 0; i < 10; i++) {
        int number = i;
        bool flag = true;
        for (int j = 0; j < numbers.size(); j++) {
            if (number == numbers[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            answer += number;
        }
    }
    return answer;
}