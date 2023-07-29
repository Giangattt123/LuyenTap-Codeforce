#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
// Escalator Conversations
const int maxN = 1e5 + 5;
int n , m , k , H;
void solve() {
	cin >> n >> m >> k >> H;
	vector <int> h(n);
	f0(i , n) {
		cin >> h[i];
	}
	int tmp = 0 , cnt = 0;
	f0(i , n) {
		int height = abs(h[i] - H);
		tmp = height / k;
		if (tmp * k == height && height <= (m - 1) * k && height != 0) 
			++cnt;
	}
	cout << cnt << endl;
}
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
