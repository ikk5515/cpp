// BOJ_1057_토너먼트
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, ji, li; cin >> n >> ji >> li;

    int cnt = 0;
    while (ji != li) {
        ji = (ji+1)/2;
        li = (li+1)/2;
        cnt++;
    }
    cout << cnt;
    return 0;
}