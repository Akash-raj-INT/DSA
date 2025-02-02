#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> v(x + 1);

    for (int i = 1; i <= x; i++) {
        cin >> v[i];
    }

    for (int i = 1; i <= x; i++) {
        int l = v[i];      
        int m = v[l];      
        int n = v[m];      

        if (n == i) {      
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
