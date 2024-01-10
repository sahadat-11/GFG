//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m; int a[n][m];
   for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) cin >> a[i][j];
   }
   
   bool flag = true;
   for(int i = 0; i < min(n, m); i++) {
      int rowsum = 0, colsum = 0;
      for(int j = 0; j < m; j++) {
         rowsum += a[i][j];
      }
      for(int j = 0; j < n; j++) {
         colsum += a[j][i];
      }
      if(rowsum != colsum) flag = false;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}




