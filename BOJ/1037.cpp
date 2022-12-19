//BOJ_1037_약수
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, result;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    result = v[0] * v[n-1];
    cout << result << "\n";
    return 0;
}