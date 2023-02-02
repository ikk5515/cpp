// BOJ_1333_부재중 전화
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v;
    int n,l,d; cin >> n >> l >> d;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {   // 노래가 재생되는 동안
            v.push_back(1);
        }
        for (int j = 0; j < 5; j++) {   // 노래가 멈춘 동안
            v.push_back(0);
        }
    }

    int ring = 0;
    while(true) {
        if (ring > v.size()) {
            break;
        }
        if (v[ring] == 0) {
            break;
        } else {
            ring += d;
        }
    }
    cout << ring << "\n";
    return 0;
}