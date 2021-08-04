#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, x;
    cin >> s;

    for (int i = 0;i < s.length();i++) {
        if (s[i] == '.') {
            x += '0';
        } else if (s[i] == '-' && s[i + 1] == '.') {
            x += '1';
            ++i;
        } else if (s[i] == '-' && s[i + 1] == '-') {
            x += '2';
            ++i;
        }
    }
    cout << x << "\n";
    return 0;
}
