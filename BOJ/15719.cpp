//BOJ_15719_중복된_숫자
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;      // 벡터의 개수를 입력받을 변수
    int num;    // 벡터에 넣어줄 값을 입력받는 임의의 변수
    int m = 0;  // 임의의 정수 m값을 저장할 변수
    vector<int> vec;    // 입력한 숫자가 들어갈 정수벡터

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }
    
    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == vec[i+1]) {
            m = i+1;
            break;
        }
    }
    cout << m;
    return 0;
}