#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> values;
    int value;

    for (int i = 0; i < n-1; i++) {
        cin >> value;
        values.push_back(value);
    }

    int where_i_am = 0;
    while (where_i_am < t-1) {
        where_i_am = where_i_am + values[where_i_am];
    }

    if (where_i_am == t-1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
