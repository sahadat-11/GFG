//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, x; cin >> n >> x; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int cnt = 0;
   for(int i = 0; i < n - 1; i++) {
      for(int j = i + 1; j < n; j++) {
         if((a[i] ^ a[j]) == x) cnt++;
      }
   }
   cout << cnt<< "\n";
   return 0;
}
// (N ^ 2)

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, x; cin >> n >> x; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int cnt = 0;
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
      int cur_xor = a[i] ^ x;
      if(mp.find(cur_xor) != mp.end()) {
         cnt += mp[cur_xor];
      }
      mp[a[i]]++;
   }
   cout << cnt << "\n";
   return 0;
}
// (N * log(n))
//The idea is based on the fact that arr[i] ^ arr[j] is equal to x 
//if and only if arr[i] ^ x is equal to arr[j]. 