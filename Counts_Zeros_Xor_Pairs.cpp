//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int cnt = 0;
   for(int i = 0; i < n - 1; i++) {
      for(int j = i + 1; j < n; j++) {
         if((a[i] ^ a[j]) == 0) cnt++;
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
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int cnt = 0;
   map<int, int> mp;
   for(int i = 0; i < n; i++) mp[a[i]]++;
   for(auto u : mp) {
      cnt += (u.second * (u.second - 1) / 2);
   }
   cout << cnt << "\n";
   return 0;
}
// (N * log(n))

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int fre[100007] = {0};
   for(int i = 0; i < n; i++) {
      fre[a[i]]++;
   }
   int cnt = 0;
   for(int i = 0; i < 100007; i++) {
      cnt += (fre[i] * (fre[i] - 1) / 2);
   }
   cout << cnt << "\n";
   return 0;
}
// (max(a[i]))
//https://prnt.sc/k3Z8vRUqStw2