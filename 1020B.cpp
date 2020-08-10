#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> next_student;
    vector<int> visited;
    int s;

    for (int i = 0; i < n; i++) {
        cin >> s;
        next_student.push_back(s-1);
        visited.push_back(0);
    }

    for (int a = 0; a < n; a++) {
        int cur_student = a;
        visited[cur_student] = 1;
        while (true) {
            cur_student = next_student[cur_student];
            if (visited[cur_student]) {
                cout << cur_student+1 << " ";
                break;
            } else {
                visited[cur_student] = 1;
            }
        }
        for (auto &v : visited) {
            v = 0;
        }
    }

    return 0;
}
