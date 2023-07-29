#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		map<string , int> mp;
		vector<string> a[3];
		for (int i = 0 ; i < 3 ; i++) {
			for (int j = 1 ; j <= n ; j++) {
				string s;
				cin >> s;
				a[i].push_back(s);
				mp[s]++;
			}
		}
		int point[3] = {};
		for (int i = 0 ; i < 3 ; i++) {
			for (string s : a[i]) {
				if (mp[s] == 1) point[i] += 3;
				else if (mp[s] == 2) point[i] += 1;
			}
		}
		for (int x : point) cout << x << " ";
		cout << endl;
	}
}
