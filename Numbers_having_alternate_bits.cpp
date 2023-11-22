//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   bool flag = true;
   int pre = -1;
   while(n) {
      int now = n % 2;
      if(pre == now) flag = false;
      pre = now;
      n >>= 1;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
//O(log(n));