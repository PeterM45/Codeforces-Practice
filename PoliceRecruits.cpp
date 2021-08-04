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
	int o=0, u=0;
	for(int i=0; i < n;i++){
		int c;
		cin>>c;
		if(c>0){
			o+=c;
		}
		else {
			if(o<1){
				++u;
			}
			else {
				--o;
			}
		}
	}
	cout << u << "\n";
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
