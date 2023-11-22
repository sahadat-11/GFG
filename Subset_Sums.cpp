//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>>subsets(vector<int> & v) {
   int n = v.size();
   int sub_cnt = (1 << n);// (2^n)
   vector<vector<int>>total_subsets;
   for(int mask = 0; mask < sub_cnt; mask++) {
      vector<int>subsets;
      for(int i = 0; i < n; i++) {
        if(mask & (1 << i)) {
          subsets.push_back(v[i]);
        }
      }
      total_subsets.push_back(subsets);
   }
   return total_subsets;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   auto all_subsets = subsets(v);
   vector<int> ans;
   for(auto subset : all_subsets) {
      int sum = 0;
      for(auto ele : subset) {
        sum += ele;
      } 
      ans.push_back(sum);
   }
   sort(ans.begin(), ans.end());
   for(auto u : ans) cout << u << " ";
   return 0;
}
