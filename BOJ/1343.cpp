//BOJ_1343_폴리오미노
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<char> polio;
    char pp;
    int count = 0;

    while (1)
    {
        cin.get(pp);
        if (pp == '\n') {
            break;
        }
        polio.push_back(pp);
    }

    for (int i = 0 ; i <polio.size(); i++) {
        if (polio[i] == 'X' && polio[i+1] == 'X' && polio[i+2] == 'X' && polio[i+3] == 'X') {
            polio[i] = 'A', polio[i+1] = 'A', polio[i+2] = 'A', polio[i+3] = 'A';
            i += 3;
            count++;
        } else if (polio[i] == 'X' && polio[i+1] == 'X') {
            polio[i] = 'B', polio[i+1] = 'B';
            count++;
            i += 2;
        } else {
            continue;
        }
    }

    for (int i = 0; i < polio.size(); i++) {
        if (polio[i] == 'X') {
            count = -1;
        }
    }

    if (count == -1) {
        cout << -1;
    }
    else if (count != 0) {
        for (int i = 0; i < polio.size(); i++) {
            cout << polio[i]; 
        }
    } else { 
        for (int i = 0; i < polio.size(); i++) {
            cout << polio[i];
        }
    }
    return 0;
}