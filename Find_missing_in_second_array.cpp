//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m; int a[n], b[m];
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < m; i++) cin >> b[i];

   map<int, int > mp;
   for(int i = 0; i < m; i++) {
      mp[b[i]]++;
   }
   vector<int> ans;
   for(int i = 0; i < n; i++) {
      if(mp[a[i]] == 0) {
         ans.push_back(a[i]);
      }
   }
   for(auto u : ans) cout << u << " ";
   return 0;
}


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m; int a[n], b[m];
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < m; i++) cin >> b[i];

   set<int> st;
   for(int i = 0; i < m; i++) {
     st.insert(b[i]);
   }
   vector<int> ans;
   for(int i = 0; i < n; i++) {
      if(st.find(a[i]) == st.end()) {
         ans.push_back(a[i]);
      }
   }
   for(auto u : ans) cout << u << " ";
   return 0;
}