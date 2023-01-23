// programmers_Lv.2_구명보트
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    int cnt = 0;
    sort(people.begin(), people.end());
    while(true) {
        if (cnt >= people.size()) {
            break;
        }
        int last = people.back();
        people.pop_back();
        if (last + people[cnt] <= limit) {
            answer++;
            cnt++;
        } else{
            answer++;
        }
    }
    return answer;
}