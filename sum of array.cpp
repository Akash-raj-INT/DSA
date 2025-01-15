#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of elements
    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int q;
    cin >> q; // Number of queries

    while (q--) {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        for (int i = l; i <= r; ++i) {
            sum += arr[i];
        }
        cout << sum << "\n";
    }
    return 0;
}

