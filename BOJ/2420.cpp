//BOJ_2420_사파리월드
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long a, b;
    cin >> a >> b;
    cout << llabs(a-b) << "\n";
    return 0;
}