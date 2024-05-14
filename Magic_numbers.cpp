//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int binmul(int a, int b) {
	int ans = 0;
	while(b) {
		if(b & 1) {
			ans = (ans + a) % mod;
		}
		a = (a + a) % mod;
		b >>= 1; 
	}
	return ans;
}
int binexp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) { // if b in odd(if 0th bit is set)
			ans = binmul(ans, a); 
		}
		a = binmul(a, a);
		b >>= 1; // b / 2;
	}
	return ans;
}

void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int mul = 1;
   for(int i = 0; i < n; i++) {
     mul *= v[i]; 
   }
   int g = 0;
   for(int i = 0; i < n; i++) {
     g = __gcd(g, v[i]);  
   }
   int ans = binexp(mul, g);
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}