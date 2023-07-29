#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
// Eating Queries
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		int n , q; cin >> n >> q;
		vector<int> a(n);
		for (int i = 0 ; i < n ; i++) cin >> a[i];
		sort(a.rbegin() , a.rend());
		for (int i = 1 ; i < n ; i++)
			a[i] += a[i - 1];
		while (q--) {
			int val; 
			cin >> val;
			auto it = lower_bound(a.begin() , a.end() , val);
			if (it == a.end()) cout << -1 << endl;
			else cout << distance(a.begin() , it) + 1 << endl;
		}
	} 
}
