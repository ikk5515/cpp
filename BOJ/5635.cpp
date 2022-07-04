//BOJ_5635_생일
#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

bool compare (tuple<string, int, int, int> people1, tuple<string, int, int, int> people2) {
    if (get<3>(people1) < get<3>(people2)) {
        return true;
    } else if (get<3>(people1) == get<3>(people2)) {
        return get<2>(people1) < get<2>(people2);
    } else if (get<2>(people1) == get<2>(people2)) {
        return get<1>(people1) < get<1>(people2);
    } else {
        return false;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n = 0;      // 학생 수
    vector <tuple<string, int, int, int>> people;
    string name;
    int day = 0, month = 0, year = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> day >> month >> year;
        people.emplace_back(name, day, month, year);
    }

    stable_sort(people.begin(), people.end(), compare);

    cout << get<0>(people[people.size()-1]) << "\n" << get<0>(people[0]);
    return 0;
}