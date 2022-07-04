//BOJ_1764_듣보잡
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int d, b;                   // 듣도 못한 사람 d, 보도 못한 사람 b;
    int count = 0;              // 듣보잡의 수
    string name;                // 이름을 입력받음

    vector<string> hear_See;
    vector<string> hearSee_Result;

    cin >> d >> b;

    // push_back을 이용할 경우 2^n으로 메모리를 잡지만 resize를 이용할시 미리 메모리 할당으로 속도를 줄인다.
    hear_See.resize(d);
    for (int i = 0; i < d; i++) {
        cin >> name;
        hear_See.push_back(name);
    }
    
    // 오름차순으로 정렬
    sort(hear_See.begin(), hear_See.end());

    for (int i = 0; i < b; i++) {
        cin >> name;

        if (binary_search(hear_See.begin(), hear_See.end(), name)) {
            count++;
            hearSee_Result.push_back(name);
        }
    }

    sort(hearSee_Result.begin(), hearSee_Result.end());

    cout << count << "\n";
    for (int i = 0; i < hearSee_Result.size(); i++) {
        cout << hearSee_Result[i] << "\n";
    }
    return 0;
}