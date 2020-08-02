#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> prices;
    int price;

    for (int i = 0; i < n; i++) {
        cin >> price;
        prices.push_back(price);
    }

    int index = -1, max_price = -1;
    for (int i = 0; i < n; i++) {
        if (prices[i] > max_price) {
            max_price = prices[i];
            index = i + 1;
        }
    }

    prices[index-1] = -1;
    max_price = -1;
    for (int i = 0; i < n; i++) {
        if (prices[i] > max_price) {
            max_price = prices[i];
        }
    }

    cout << index << " " << max_price << endl;

    return 0;
}
