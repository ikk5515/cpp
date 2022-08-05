//BOJ_1072_게임
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    double X, Y, Z;        // X = 게임 횟수, Y = 이긴 게임, Z = 승률
    double A;              // (int)Y*100/X != (int)((y+i)*100/(x+i))중 가장 작은 i
    int count = 0;
    int n = 0;

    cin >> X >> Y;
    Z = Y*100/X;     // 승률 계산
    n = floor(Z);

        if (n >= 99) {
            cout << "-1";
            return 0;
        } else {
            while (A <= Z)
            {
                A = n+1;
                count = (A*X - 100*Y -1) / (100-A) +1;
            }
    }
    cout << count;
    return 0;
}