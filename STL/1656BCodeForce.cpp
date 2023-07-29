#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 2e5 + 5;
int n , k , a[maxN];
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		f1(i , n) cin >> a[i];
		sort(a + 1 , a + n + 1);
		map <int , int> mp;
		bool ok = 0;
		f1(i , n) {
			if (mp[a[i] - k]) {
				cout << "YES" << endl;
				ok = 1;
				break;
			}
			else mp[a[i]] = 1;
		}
		if (!ok) cout << "NO" << endl;
	}
}
