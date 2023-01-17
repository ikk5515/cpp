// programmers_Lv.1_크기가 작은 부분 문자열
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) { 
    vector<string> v;
    int answer = 0;
    int length = p.length();
    string str = "";
    
    for (int i = 0; i < t.size()-length+1; i++) {
        str = "";
        for (int j = i; j < length+i; j++) {
            str += t[j];
        }
        v.push_back(str);
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] <= p) {
            answer++;
        }
    }
    return answer;
}