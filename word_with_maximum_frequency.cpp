//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; 
  getline(cin, s);
  stringstream ss(s);
  string word;
  map<string, int> mp;
  vector<string> v;
  while(ss >> word) {
      mp[word]++;
      v.push_back(word);
  }
  int mx = 0; string mxs;
  for(auto u : v) {
    if(mp[u] > mx) {
      mx = mp[u];
      mxs = u;
    }
  }
  //for(auto u : mp) cout << u.first << " " << u.second << endl;
  string ans = mxs + " " + to_string(mx);
  cout << ans << "\n";
  return 0; 
}