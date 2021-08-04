#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
	int n;
    cin >> n;
    int c[n], l(0), r(n - 1), s(0), d(0), t(0);

    for (int i = 0; i < n; i++)
        cin >> c[i];

    while (l < r + 1)
    {
        t++;
        if (c[l] > c[r])
        {
            if (t % 2)
                s += c[l];
            else
                d += c[l];
            l++;
        }
        else
        {
            if (t % 2)
                s += c[r];
            else
                d += c[r];
            r--;
        }
    }

    cout << s << " " << d << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}
