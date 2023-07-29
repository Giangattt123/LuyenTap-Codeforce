#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e4;
// Array Reodering: i , j with gcd(ai , 2aj) > 1 and 1 <= i < j < n
int n, a[maxN];
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		cin >> n;
		int even = 0;
		f1 (i , n) {
			cin >> a[i];
			if (a[i] % 2 == 0) ++even;
		}
		int odd = n - even;
		ll ans = 1ll * even * odd + 1ll * (even) * (even - 1) / 2;
		f1 (i , n) {
			if (a[i] % 2) {
				f1 (j , i - 1) {
					if (a[j] % 2) 
						if (__gcd(a[i] , a[j]) > 1) 
							++ans;
				}
			}
		}
		cout << ans << endl;
	}
}
