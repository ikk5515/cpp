//BOJ_16171_나는 친구가 적다
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s1, s2;  // 처음에 입력받은 문자열 2개
    string corrs1;  // 숫자를 없앤 처음 s1문자열
    
    cin >> s1 >> s2;
    int wordsLen = s2.size();

    for (int i = 0; i < s1.size(); i++) {
        if (isdigit(s1[i])) {
            continue;
        } else {
            corrs1.push_back(s1[i]);
        }
    }
    if (corrs1.find(s2) == string::npos) {  // 해당하는 문자열이 없을경우
        cout << 0 << "\n";
    } else {
        cout << 1 << "\n";
    }

    return 0;
}