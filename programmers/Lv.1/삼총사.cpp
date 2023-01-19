// programmers_Lv.1_삼총사
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    vector<int> temp;
    int k = 3;
    for (int i = 0; i < k; i++) {
        temp.push_back(1);
    }
    for (int i = 0; i < number.size()-k; i++) {
        temp.push_back(0);
    }
    
    vector<int> all;
    sort(temp.begin(), temp.end());
    do {
        int cnt = 0;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == 1) {
                cnt += number[i];
            }
        }
        all.push_back(cnt);
    } while(next_permutation(temp.begin(), temp.end()));
    
    for (int i = 0; i < all.size(); i++) {
        if (all[i] == 0) {
            answer++;
        }
    }
    return answer;
}