#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
long n;
void solve() {
	cin >> n;
	long f[n] , s[n];
	for (long i = 0 ; i < n ; i++) cin >> s[i];
	for (long i = 0 ; i < n ; i++) cin >> f[i];
	for (long i = 0 ; i < n ; i++) {
		long Max;
		if (i == 0) { 
			Max = s[0];
		}
		else 
			Max = max(f[i - 1] , s[i]);
		cout << f[i] - Max << " ";
	}
	cout << endl;
}
int main() {
	fast_io;
	long t; cin >> t;
	while (t--) {
		solve();
	}
}
