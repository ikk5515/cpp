// BOJ_2839_설탕_배달
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N = 0;
    int count = 0;
    cin >> N;

    while (1)
    {
        if (N >= 3) {
            if (N % 5 == 0) {
                N -= 5;
                count++;
            }
            else if (N % 3 == 0) {
                N -= 3;
                count++;
            } else if (N > 5) {
                N -= 5;
                count++;
            }
        }
        if (count == 0) {
            count = -1;
            break;
        } else if (N == 0) {
            break;
        } else if ( N < 3 && N % 5 != 0 && N % 3 != 0) {
            count = -1;
            break;
        }
    }
    cout << count;
}