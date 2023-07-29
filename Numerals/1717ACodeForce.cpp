#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
// Madoka and Strange Thoughts
ll n;
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		cin >> n;
		cout << n + n / 2 * 2 + n / 3 * 2 << endl;
	}
}
