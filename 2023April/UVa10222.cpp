#include <bits/stdc++.h>

using namespace std;

int main() {
    string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string in;
    while (getline(cin, in)) {
        for (auto i : in) {
            if (i == ' ')
                cout << i;
            else
                cout << keyboard[keyboard.find(tolower(i)) - 2];
        }
        cout << endl;
    }
    return 0;
}