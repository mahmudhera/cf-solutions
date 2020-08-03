#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int n, m, a;
    cin >> n >> m >> a;
    unsigned long long int result = ceil(1.0*n/a) * ceil(1.0*m/a);
    cout << result;
    return 0;
}
