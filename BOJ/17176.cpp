//BOJ_17176_암호해독기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N;      // 수열의 길이 N
    int number;
    char yes = 'y';
    char no = 'n';
    string str1, str2;         // 평문, 비교할 문자열
    vector<int> vec;    // 암호문에 해당하는 수 N개를 입력받을 벡터
    vector<char> pass;  // 암호를 각각 저장할 벡터
    vector<char> amho;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> number;
        vec.push_back(number);
    }

    cin.ignore();
    getline(cin, str1);

    pass.push_back(' ');
    for (int i = 65; i < 91; i++) {
        pass.push_back(i);
    }
    for (int i = 97; i < 123; i++) {
        pass.push_back(i);
    }
    for (int i = 0; i < N; i++) {
        amho.push_back(pass[vec[i]]);
    }

    for (int i = 0; i < N; i++) {
        str2.push_back(amho[i]);
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    if (str1 == str2) {
        cout << yes << "\n";
    } else {
        cout << no << "\n";
    }
    return 0;
    
}