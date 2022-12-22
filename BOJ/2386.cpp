//BOJ_2386_도비의 영어 공부
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    char word;

    while (1)
    {
        int count = 0;
        cin >> word;
        if (word == '#') {
            break;
        }
        word = tolower(word);
        string str; getline(cin, str);
        for (int i = 0; i < str.size(); i++) {
            if (tolower(str[i]) == word) {
                count++;
            }
        }
        cout << word << " " << count << "\n";
    }
    return 0;
}