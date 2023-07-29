#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pa pair<int , int>
#define f0(i , n) for (int i = 0 ; i < n ; i++)
#define f1(i , n) for (int i = 1 ; i <= n ; i++)
#define fast_io ios::sync_with_stdio(0); cin.tie(0);
const int maxN = 1e5 + 5;
/*
	gcd(a , b) = g
	Luôn được biểu diễn dưới dạng ax + by = g
	Trường hợp cơ sở a = g , b = 0 
	=> g = ax + by => g = gx + 0y => x = 1 , y = V
	a = b(truoc) , b = a(truoc) % b(truoc) = a - a(truoc)/b(truoc) * b(truoc)
	VD g = x1 * a1 + y1 * b1(THCS a1 = g , b1 = 0)
	g = x2 * a2 + y2 * b2
	Mặt khác ta có a1 = b2 , b1 = a2 % b2 = a2 - a2/b2 * b2;
	
	ax + by = g (1) --> bx1 + (a % b)y1 = g
    Mà a % b  = a - a/b * b;
    --> bx1 + (a - a/b * b)y1 = g
    --> ay1 + (x1 - a/b * y1)b = g (2)
    Tu 1 va 2 --> x = y1
    			  y = x1 - a/b * y1
    TQ : xn = y(n-1)
    	yn = x(n-1) - a/b * y(n-1)
*/
int x,y,g;
// ax + by = gcd(a,b) = g
// Time complexity : O(logN) Với N = max(a , b)
void extended_gcd(int a , int b){
	if(b == 0){
		g = a;
		x = 1;
		y = 0;
		return;
	}
	extended_gcd(b, a % b);
	int tmp = x;
	x = y;
	y =  tmp  - a / b * y;
}
int main() {
	fast_io;
	int t; cin >> t;
	while (t--) {

	}
}
