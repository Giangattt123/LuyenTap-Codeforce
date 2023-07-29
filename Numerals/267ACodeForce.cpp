#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
int n , ans;
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		int a , b;
		cin >> a >> b;
		ans = 0;
		while (a != 0 && b != 0) {
			if (a < b) swap(a , b);
			ans += a/b;
			a = a % b;
		}
		cout  << ans << endl;
	}
}
