//BOJ_14729_칠무해
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<double>v;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    double number;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> number;
        v.push_back(number);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 7; i++) {
        cout<<fixed;
        cout.precision(3);
        cout << v[i] << "\n";
    }
}