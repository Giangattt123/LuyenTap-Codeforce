#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		int n , k; cin >> n >> k;
		map <int , int> mp1 , mp2;
		f1(i , n) {
			int val;
			cin >> val;
			if (mp1.find(val) == mp1.end()) 
				mp1[val] = i;
			mp2[val] = i;
		}
		while (k--) {
			int a , b;
			cin >> a >> b;
			if (mp1[a] <= mp2[b] && mp1[a]) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
