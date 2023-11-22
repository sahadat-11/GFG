//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int XOR = 0;
   for(int i = 0; i < n; i++) {
      XOR ^= a[i];
   }
   vector<int> ans;
   for(int i = 0; i < n; i++) {
      ans.push_back(XOR ^ a[i]);
   }
   for(auto u : ans) cout << u << " ";
   return 0;
}
//https://prnt.sc/CNN7GOpPL5DH