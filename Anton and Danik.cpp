#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0, danik = 0;

    for (int i = 0; i < s.length(); i++) {
        char game = s[i];
        if (game == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
        cout << "Anton" << endl;
    else if (danik > anton)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}

