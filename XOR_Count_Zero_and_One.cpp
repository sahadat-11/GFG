//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int set = 0, unset = 0;
   while(n) {
      if(n % 2) set++;
      else unset++;
      n >>= 1;
   }
   //cout << set << " " << unset << endl;
   cout << (set ^ unset) << "\n";
   return 0;
}
// O(log(n));