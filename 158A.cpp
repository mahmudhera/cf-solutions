#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> scores;
    int score;

    for (int i = 0; i < n; i++) {
        cin >> score;
        scores.push_back(score);
    }

    int ans = 0;
    for (auto &&score : scores) {
        if (score >= scores[k-1] && score > 0){
            ans++;
        }
    }
    cout << ans;

    return 0;
}
