// programmers_Lv.1_푸드 파이트 대회
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int first = food[0];
    int piece = food[1]/2;
    for (int i = 0; i < piece; i++) {
        answer += first + '0';
    }
    
    int food_piece = 0;
    for (int i = 2; i < food.size(); i++) {
        first += 1;
        food_piece = first;
        piece = food[i];
        
        if (piece >= 2) {
            for (int j = 0; j < piece/2; j++) {
                answer += food_piece+'0';
            }
        }
    }
    string back = "";
    for (int i = answer.size()-1; i >= 0; i--) {
        back += answer[i];
    }
    answer += '0';
    answer += back;
    return answer;
}