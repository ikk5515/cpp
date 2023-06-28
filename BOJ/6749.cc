// BOJ_6749_Next in line
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a, b, diff; cin >> a >> b;
    cout << b + (b - a);
    return 0;
}