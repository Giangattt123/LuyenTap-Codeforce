#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
const int MOD = 1e9 + 7;
// Double Strings
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector <string> a(n);
		map <string , int> mp;
		for (int i = 0 ; i < n ; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		for (int i = 0 ; i < n ; i++) {
			bool check = 0;
			for (int j = 1 ; j < a[i].size() ; j++) {
				string s1 = a[i].substr(0 , j);
				string s2 = a[i].substr(j);
				if (mp[s1] && mp[s2]) 
					check = 1;
			}
			cout << check;
		}
		cout << endl;
	}
}
