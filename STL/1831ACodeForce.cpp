#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
// Twin Permutations
void solve() {
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        cout << n + 1 - x << " ";
    }
    cout << endl;
}
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
