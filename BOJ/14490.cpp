//BOJ_14490_백대열
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b > 0)
    {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    char s;
    int n, m;
    cin >> n >> s >> m;

    int g = gcd(n,m);
    cout << n/g << ':' << m/g;
    return 0;
}