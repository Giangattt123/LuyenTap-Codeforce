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
	map <string , int> mp;
	while (t--) {
		string s;
		cin >> s;
		if (mp[s] == 0) {
			mp[s]++;
			cout << "OK" << endl;
		}
		else {
			cout << s + to_string(mp[s]) << endl;
			mp[s]++;
		}
	}
}
