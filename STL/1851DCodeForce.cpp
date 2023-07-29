#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define f2(i , n) for (int  i = 0 ; i < n - 1 ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;

int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector <int> a(n - 1);
		set <int> st; st.insert(n);
		f2(i , n) {
			cin >> a[i];
			st.insert(i + 1);
		}
		int fl = 1 , l = -1;
		if (st.find(a[0]) != st.end()){
			st.erase(st.find(a[0]));
		} else {
			if (l == -1) l = a[0];
			else fl = 0;
		}
		for (int i = 1 ; i < n - 1 ; i++) {
			int tmp = a[i] - a[i - 1];
			if (st.find(tmp) != st.end()) {
				st.erase(st.find(tmp));
			} else {
				if (l == -1) l = tmp;
				else {
					fl = 0;
					break;
				}
			}
		}
		if (fl == 0) cout << "NO" << endl;
		else {
			int s = 0;
			for (int x : st) s += x;
			if (l == -1) {
				int tmp1 = n * (n + 1) / 2;
				if (tmp1 - a[n - 2] == s) cout << "YES" << endl;
				else cout << "NO" << endl;
			} else {
				if (s == l) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
	}
}
