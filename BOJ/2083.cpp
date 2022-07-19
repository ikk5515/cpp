//BOJ_2083_럭비_클럽
#include <iostream>
#include <string>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string name;
    int age, weight;

    while (1)
    {
        cin >> name >> age >> weight;
        if (name == "#" && age == 0 && weight == 0) {
            break;
        }

        if (age > 17 || weight >= 80) {
            cout << name << " " << "Senior" << "\n";
        } else {
            cout << name << " " << "Junior" << "\n";
        }
    }
    return 0;
}