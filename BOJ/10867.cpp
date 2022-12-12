//BOJ_10867_중복_빼고_정렬하기
#include <iostream>
#include <vector>
#include <set>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> v;

    int count = 0;
    cin >> count;   // 입력 받을 정수의 개수
    
    for (int i = 0; i < count; i++) {
        int num;    // 입력받을 정수
        cin >> num;
        v.push_back(num);
    }
    set<int> s;

    for (int i = 0; i < v.size(); i++ ) {
        s.insert(v[i]);
    }

    for (auto iter : s) {
        cout << iter << " ";
    }
    return 0;

}