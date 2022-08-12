//BOJ_10546_배부른_마라토너
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    int N;
    multimap<string, int> name;
    multimap<string, int>::iterator iter;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str;
        name.insert(make_pair(str, i));
    }

    for(int i = 0; i < N-1; i++) {
        cin >> str;
        if(name.find(str) != name.end()) {
            name.erase(name.find(str));
        }
    }
    for (iter = name.begin(); iter != name.end(); iter++) {
        cout << iter->first << "\n";
    }
    return 0;
}