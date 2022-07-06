// BOJ_6588_골드바흐의_추측
#include <iostream>
#include <cmath>
using namespace std;

int arr[1000001] = {false}; // false는 소수
int n = 1000000;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    arr[0] = arr[1] = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] == false)
        {
            for (int j = i + i; j <= n; j += i)
            {
                arr[j] = true;
            }
        }
    }

    while (1)
    {
        bool flag = false;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        arr[2] = true;

        for (int i = 3; i <= n; i++)
        {
            if (!arr[i] && !arr[n - i] && i + n - i == n)
            {
                cout << n << " = " << i << " + " << n - i << "\n";
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "Goldbach's conjecture is wrong." << "\n";
        }
    }
    return 0;
}