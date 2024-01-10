//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n;
   string s; string ss;
   cin >> s >> ss >> n;
   int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   map<char, int> mp;
   for(int i = 0; i < n; i++) {
      mp[ss[i]] = a[i];
   }
   ll max_sum = INT_MIN;
   ll cur_sum = 0;
   string cur, ans;
   for(int i = 0; i < s.size(); i++) {
      if(mp.find(s[i]) != mp.end()) {
         cur_sum += mp[s[i]];
      }
      else {
         cur_sum += int(s[i]);
      }
      cur.push_back(s[i]);
      if(cur_sum > max_sum) {
         max_sum = cur_sum;
         ans = cur;
      }
      if(cur_sum < 0) {
         cur_sum = 0;
         cur = "";
      } 
   }
   cout << max_sum << "\n";
   cout << ans << "\n";
   return 0;
}