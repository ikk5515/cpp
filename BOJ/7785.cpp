//BOJ_7785_회사에_있는_사람
#include <algorithm>
#include <functional>
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    string name, enter_Leave;
    set<string> information;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> name >> enter_Leave;
        if (enter_Leave == "enter") {
            information.insert(name);
        } else {
            information.erase(name);
        }
    }

    for (auto itr = information.rbegin(); itr != information.rend(); itr++) {
        cout << *itr << "\n";
    }
    return 0; 
}