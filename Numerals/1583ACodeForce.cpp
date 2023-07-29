#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define el cout << "\n"
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
int n , a[200] , p[20005];
bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2 ; i <= sqrt(n) ; i++) 
		if (n % i == 0) return false;
	return true;
}
int main() { 
	fast_io;
	int t; cin >> t;
	while (t--) {
		cin >> n;
		int s = 0 , pos = 0;
		f1(i , n) {
			cin >> a[i];
			if (a[i] % 2) pos = i;
			s += a[i];
		}
		if (!isPrime(s)) {
			cout << n << endl;
			f1(i , n) cout << i << " ";
			cout << endl;
		} else {
			cout << n - 1 << endl;
			f1(i , n)
				if (i != pos) cout << i << " ";
			cout << endl;
		}
	}
}
