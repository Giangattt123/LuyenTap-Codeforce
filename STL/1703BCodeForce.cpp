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
		string s; cin >> s;
		set<char> st;
		for (char x : s) st.insert(x);
		cout << n + st.size() << endl;
	}
}
