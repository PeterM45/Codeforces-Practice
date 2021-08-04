#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;



void solve() {
	string s;
	cin >> s;

	int u=0, l=0;
	for(int i=0; i <s.size();i++){
		if(isupper(s[i])){
			u++;
		} else {
			l++;
		}
	}
	if(u>l){
		char ch;
		for (int i=0; i<s.size(); i++){
			ch = toupper(s[i]);
			cout<<ch;
		}
	} else {
		char ch;
		for (int i=0; i<s.size(); i++){
			ch = tolower(s[i]);
			cout<<ch;
		}

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
