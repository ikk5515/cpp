// BOJ_15727_조별과제를 하려는데 조장이 사라졌다
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int l; cin >> l;

    int cnt = 0;
    int tmp = 5;
    while(l != 0) {
        if (l >= tmp) {
            l -= tmp;
            cnt++;
            tmp = 5;
        } else {
            tmp--;
        }
    }
    cout << cnt;
    return 0;
}