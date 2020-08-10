#include <iostream>

using namespace std;

int main()
{
    int tc, len, counter, ans;
    char ch;
    cin >> tc;
    while (tc--) {
        cin >> len;
        ans = 0;
        counter = 0;
        while (len--) {
            cin >> ch;
            if (ch == '(') {
                counter++;
            } else {
                counter--;
            }
            if (counter < ans) {
                ans = counter;
            }
        }
        cout << -ans << endl;
    }
    return 0;
}
