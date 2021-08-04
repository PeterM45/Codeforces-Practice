#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    ll sum = 0;
    for (int i = 1; i <= w; i++) {
        sum = sum + (i * k);
    } if (sum <= n) {
        cout << 0;
    } else {
        cout << sum - n;
    }
}
