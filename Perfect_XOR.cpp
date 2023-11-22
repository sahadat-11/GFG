//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   for(int x = 0; x <= n; x++) {
      if((x ^ n) == (x | n)) cnt++;
   }
   cout << cnt << "\n";
   return 0;
}
//O(n);

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   ll cnt = 1;
   while(n) {
      if(n % 2 == 0) {
         cnt *= 2;
      }
      n >>= 1;
   }
   cout << cnt << "\n";
   return 0;
}
//O(n);