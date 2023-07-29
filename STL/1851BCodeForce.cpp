#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
void solve() {
	int n ; cin >> n;
	vector <int> a(n) , b(n);
	f0(i , n) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin() , b.end());
	f0(i , n) {
		if ((a[i] % 2 == 0 && b[i] % 2 != 0) || (a[i] % 2 != 0 && b[i] % 2 == 0)) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
