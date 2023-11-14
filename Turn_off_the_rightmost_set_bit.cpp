//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int k = -1;// k store the rightmost set bit index;
   for(int i = 0; i < 32; i++) { //right to left;
      int mask = (1 << i);
      if(mask & n) {
         k = i;
         break;
      }
   }
   int mask = ~(1 << k);
   n &= mask;
   cout << n << endl;
   return 0;
}
// left shift
// O(32)

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int k = -1;// k store the rightmost set bit index;
   int x = n, cnt = 0;
   while(x) {
      if(x & 1) {
         k = cnt;// cnt means right to left ith bit;
         break;// k 
      }
      cnt++;
      x >>= 1;
   }
   int mask = ~(1 << k);
   n &= mask;
   cout << n << endl;
   return 0;
}
// right shift
// O(log(n))

// easy approach:
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   cout << (n & (n - 1));
   return 0;
}
// O(1);

//https://prnt.sc/XBKTEkXAxOsu
