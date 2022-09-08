//BOJ_3135_라디오
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B;
    int N;
    int number;
    int ans = 10001;
    vector<int> vec;
    

    cin >> A >> B;      // 현재 주파수 A, 원하는 주파수 B;
    cin >> N;           // 즐겨찾기된 주파수 개수 N
    
    for(int i = 0; i < N; i++) {
        cin >> number;
        vec.push_back(number);
    }

    for (int i = 0; i < vec.size(); i++) {
        ans = min(abs(vec[i] - B), ans);
    }
    int num1 = abs(A-B);
    if (num1 <= ans) {
        cout << num1 << "\n";
    } else {
        cout << ans+1 << "\n";
    }    

    return 0;
}