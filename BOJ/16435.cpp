//BOJ_16435_스네이크버드
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, L;
    vector<int> vec;
    cin >> N >> L;

    int number;
    for (int i = 0; i < N; i++) {
        cin >> number;
        vec.push_back(number);
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < N; i++) {
        if (L >= vec[i]) {
            L++;
        } else {
            break;
        }
    }    
    cout << L << "\n";

    return 0;
}