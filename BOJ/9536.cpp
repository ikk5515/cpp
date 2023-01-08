// BOJ_9536_여우는 어떻게 울지?
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int cnt = 0;
    vector<string> v;
    vector<string> v2;
    vector<string> animals;
    string str;
    string s;
    v.resize(101);
    v2.resize(101);
    animals.resize(101);
    int n; cin >> n;
    while (true)
    {
        if (cnt == n) {
            for (int i = 0; i < v2.size(); i++) {
                bool flag = true;
                for (int j = 0; j < animals.size(); j++) {
                    if (v2[i] == animals[j]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    cout << v2[i]<< " ";
                }
            }
        v2.clear();
        animals.clear();
        break;
        }
        getline(cin, s);
        istringstream ss(s);
        if (s == "what does the fox say?") {
            cnt++;
            continue;
        }
        while (getline(ss, str, ' ')) {
            v.push_back(str);
        }
        if (v[1] == "goes") {
            animals.push_back(v[2]);
        } else {
            for (int i = 0; i < v.size(); i++) {
                v2.push_back(v[i]);
            }
        }
        v.clear();
    }
    return 0;
}