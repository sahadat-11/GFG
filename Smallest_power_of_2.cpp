//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int k = 64 - (__builtin_clz(n - 1));
   cout << (1 << k) << endl;
   return 0;
}


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int x = log2(n);
   if((1LL << x) == n) cout << (1ll << x) << "\n";
   else cout << (1ll << (x + 1));
   return 0;
}
//https://www.geeksforgeeks.org/smallest-power-of-2-greater-than-or-equal-to-n/