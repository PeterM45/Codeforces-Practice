#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
	int n, a=0, d=0;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0; i<n; i++){
		if(s[i] == 'A'){
			a++;
		} else {
			d++;
		}
	}
	if(a>d){
		cout << "Anton\n";
	}
	if(d>a){
		cout << "Danik\n";
	}
   	if (a==d){
		cout << "Friendship\n";
	}
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
