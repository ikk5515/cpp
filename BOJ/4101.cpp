// BOJ_4101_크냐?
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a = 1, b = 1;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            return 0;
        }
        if (a > b) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    return 0;
}