// programmers_Lv.1_햄버거 만들기

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string words = "";
    for (int i = 0; i < ingredient.size(); i++) {
        words += to_string(ingredient[i]);
        if (words.size() >= 4) {
            int last = words.size() - 4;
            string temp = words.substr(last);
            if (temp == "1231") {
                words.erase(last, last+4);
                answer++;
            }
        }
    }
    
    return answer;
}