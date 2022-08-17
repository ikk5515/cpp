//BOJ_2872_우리집엔_도서관이_있어
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, tmp, number;
    int cnt = 0;
    vector<int>vec;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> number;
        vec.push_back(number);
    }
    tmp = N;
    for (int i = N-1; i >= 0; i--) {
        if (vec[i] == tmp) {
            tmp--;
        } else {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}