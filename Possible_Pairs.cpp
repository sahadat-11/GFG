//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int gcd, lcm; cin >> gcd >> lcm;
   int n = gcd * lcm;
   int cnt = 0;
   for(int i = 1; i * i <= n; i++) {
   	if(n % i == 0) {
   	  int g = __gcd(i, n / i);
   	  int l = i / g * (n / i);
   	  if(g == gcd and l == lcm) {
   	  	cnt++;
   	  	if(i != n / i) cnt++;
   	  }
   	}
   }
   cout << cnt << "\n";
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