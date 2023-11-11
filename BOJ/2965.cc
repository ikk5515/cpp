#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int K[3] = { 0, };

	cin >> K[0] >> K[1] >> K[2];
	
	sort(K, K + 3);

	cout << max(K[2] - K[1], K[1] - K[0]) - 1;

	return 0;
}