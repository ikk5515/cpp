// BOJ_4158_CD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> v1;
    vector<int> v2;
    int count;
    int N, M;

    while (true)
    {
        v1.clear();
        v2.clear();
        count = 0;
        cin >> N >> M;
        if (N == 0 && M == 0)
        {
            break;
        }
        for (int i = 0; i < N; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        for (int i = 0; i < M; i++)
        {
            int a;
            cin >> a;
            v2.push_back(a);
        }
        int maxN = N > M ? N : M;
        for (int i = 0; i < maxN; i++)
        {
            if (binary_search(v1.begin(), v1.end(), v2[i]))
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}