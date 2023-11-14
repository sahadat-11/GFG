//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   int mask = (1 << k);
   if(mask & n) {
      cout << "YES\n";
   }
   else {
      cout << "NO\n";
   }
   return 0;
}
// left shift

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   int mask = (n >> k);
   if(mask & 1) {
      cout << "YES\n";
   }
   else {
      cout << "NO\n";
   }
   return 0;
}
// right shift
//https://prnt.sc/QrkUbmW82f3t

