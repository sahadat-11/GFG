//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+ 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   ll sum = 0;
   for(int bit = 0; bit < 32; bit++) {
      int set_bit = 0, unset_bit = 0;
      for(int i = 0; i < n; i++) {
         if(a[i] & (1LL << bit)) {
            set_bit++;
         }
         else {
            unset_bit++;
         }
      }
      sum = (sum + (2ll * (1ll * set_bit * unset_bit) % mod) % mod) % mod;
   }
   cout << sum << "\n";
   return 0;
}