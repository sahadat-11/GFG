//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
int padvon[N];
void solve() {
   int n; cin >> n;
   cout << padvon[n] << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  padvon[0] = padvon[1] = padvon[2] = 1;
  for(int i = 3; i < N; i++) {
  	padvon[i] = (padvon[i - 2] + padvon[i - 3]) % mod;
  }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}