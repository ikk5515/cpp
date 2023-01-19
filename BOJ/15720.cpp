// BOJ_15720_카우버거
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<int> Buger, Side, Drink;
    vector<int> all_price;

    int B, C, D; cin >> B >> C >> D;

    for (int i = 0; i < B; i++) {
        int n; cin >> n;
        Buger.push_back(n);
    }
    for (int i = 0; i < C; i++) {
        int n; cin >> n;
        Side.push_back(n);
    } 
    for (int i = 0; i < D; i++) {
        int n; cin >> n;
        Drink.push_back(n);
    }

    sort(Buger.begin(), Buger.end(), greater<int>());
    sort(Side.begin(), Side.end(), greater<int>());
    sort(Drink.begin(), Drink.end(), greater<int>());

    int min_num = min({Buger.size(), Side.size(), Drink.size()});
    int max_num = max({Buger.size(), Side.size(), Drink.size()});

    
    int price = 0;
    int f_price = 0;
    for (int i = 0 ; i < Buger.size(); i++) {
        f_price += Buger[i];
    }
    for (int i = 0 ; i < Side.size(); i++) {
        f_price += Side[i];
    }
    for (int i = 0 ; i < Drink.size(); i++) {
        f_price += Drink[i];
    }

    for (int i = 0; i < min_num; i++) {
        Buger[i] *= 0.9;
        Side[i] *= 0.9;
        Drink[i] *= 0.9;
    }

    for (int i = 0 ; i < Buger.size(); i++) {
        price += Buger[i];
    }
    for (int i = 0 ; i < Side.size(); i++) {
        price += Side[i];
    }
    for (int i = 0 ; i < Drink.size(); i++) {
        price += Drink[i];
    }

    cout << f_price << "\n";
    cout << price << "\n";
    return 0;
}