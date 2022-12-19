//BOJ_19575_Polynomial
#include <iostream>
#define mod 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, x;       // 다항식의 차수 N, 평가할 값인 정수 x
    cin >> n >> x;


    long long ans = 0;
    for (int i = 0; i< n+1; i++) {
        int a,b; cin >> a >> b;
        if (i == 0)  { 
            ans = a;
        } else {        // 호너의 방법
            ans = (ans * x + a) % mod;
        }
    }
    cout << ans << "\n";
    return 0;
}