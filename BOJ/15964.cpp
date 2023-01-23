// BOJ_15964_이상한 기호
#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    long long first = n + m;
    long long second = n - m;
    cout << first * second;
}