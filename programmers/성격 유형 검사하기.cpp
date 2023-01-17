// programmers_Lv.1_성격 유형 검사하기
#include <string>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    int arr[200] = { 0 , };
    string answer = "";
    
    string s;
    for (int i = 0; i < survey.size(); i++) {
        s = survey[i];

        int a = (int)s[0];
        int b = (int)s[1];
        if (choices[i] == 1) {
            arr[a] += 3;
        } else if (choices[i] == 2) {
            arr[a] += 2;
        } else if (choices[i] == 3) {
            arr[a] += 1;
        } else if (choices[i] == 4) {
            continue;
        } else if (choices[i] == 5) {
            arr[b] += 1;
        } else if (choices[i] == 6) {
            arr[b] += 2;
        } else if (choices[i] == 7) {
            arr[b] += 3;
        }
    }
    
    if (arr[82] >= arr[84]) {
        answer += char(82);
    } else {
        answer += char(84);
    }

    if (arr[67] >= arr[70]) {
        answer += char(67);
    } else {
        answer += char(70);
    }

    if (arr[74] >= arr[77]) {
        answer += char(74);
    } else {
        answer += char(77);
    }

    if (arr[65] >= arr[78]) {
        answer += char(65);
    } else {
        answer += char(78);
    }
    return answer;
}