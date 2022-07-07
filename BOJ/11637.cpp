// BOJ_11637_인기_투표
#include <iostream>
#include <algorithm>
using namespace std;

int arr[501];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T = 0, N = 0;
    int number = 0, sum;

    cin >> T; // 테스트 케이스의 수
    int j = 0;
    while (1)
    {
        j++;
        int max_Sum = 0;
        int max_Count = 0;
        sum = 0;

        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> number;
            arr[i] = number;
            sum += number;
        }

        max_Sum = arr[0];
        for (int i = 0; i < N; i++) {
            max_Sum = max(max_Sum, arr[i]);
        }

        int count_result = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] == max_Sum) {
                count_result = i;
            }
        }

        max_Count = count(arr, arr + N, max_Sum);
        sum /= 2;

        if (max_Sum > sum && max_Count == 1)
        {
            cout << "majority winner " << count_result + 1<< "\n";
        }
        else if (max_Sum <= sum && max_Count == 1)
        {
            cout << "minority winner " << count_result + 1 <<"\n";
        }
        else
        {
            cout << "no winner" << "\n";
        }
        if (j == T)
        {
            break;
        }
    }
    return 0;
}