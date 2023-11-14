//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k;
   k--; // for 0 index;
   int mask = ~(1 << k);
   n &= mask;
   cout << n << endl;
   return 0;
}
// left shift
//https://prnt.sc/6uoXTbSOb_Y9
