#include <iostream>
#include <algorithm>
using namespace std;



int main(void)
{
	ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
	int a, b;
	cin >> a >> b;

    int MOD = 4;
	a--, b--;

	int x = a / MOD, y = a % MOD;
	int xx = b / MOD, yy = b % MOD;

	int res = abs(x - xx) + abs(y - yy);

	cout << res << "\n";

	return 0;
}
