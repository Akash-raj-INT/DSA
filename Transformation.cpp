#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    vector<long long> sequence;
    while (b > a) {
        sequence.push_back(b);
        if (b % 2 == 0) {
            b /= 2;
        } else if (b % 10 == 1) {
            b /= 10;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    sequence.push_back(a);
    reverse(sequence.begin(), sequence.end());

    if (sequence[0] == a) {
        cout << "YES" << endl;
        cout << sequence.size() << endl;
        for (long long x : sequence) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
