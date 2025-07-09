#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    vector<ll> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    // 내림차순 정렬
    sort(heights.rbegin(), heights.rend());

    ll total_sum = 0;
    for (int i = 0; i < n; ++i) {
        total_sum = (total_sum * 2 + heights[i]) % MOD;
    }

    cout << total_sum << endl;
    return 0;
}
