// programmers_Lv.1_기사단원의 무기
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> v;
    for (int j = 1; j <= number; j++) {
        int count = 0;
        for (int i = 1; i <= sqrt(j); i++) {
            if (j%i == 0) {
                if(j/i == i) {
                    count++;
                } else {
                    count += 2;
                }
            }
        }
        if (count > limit) {
            v.push_back(power);
        } else {
            v.push_back(count);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        answer += v[i];
    }
    return answer;
}