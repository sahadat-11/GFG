//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int t = 1; 
  //cin >> t;
  while(t--) {
    string s; cin >> s;
    map<char, int> mp;
    for(auto u : s) mp[u]++;
    int cnt = 0;
    for(auto u : mp) {
      if(u.second % 2) cnt++;
    }
    if(cnt > 1) cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}
