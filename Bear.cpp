#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int year = 0;
    while (x <= y) {
        x *= 3;
        y *= 2;
        year++;
    }
    cout << year << endl;
    return 0;
}

