//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int spf[N], pre_cal[N];
void solve() {
   int a, b; cin >> a >> b;
   cout << pre_cal[b] - pre_cal[a - 1] << endl;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i < N; i++) spf[i] = i;
  for(int i = 2; i < N; i++) {
   if(spf[i] == i) {
     for(int j = i; j < N; j += i) {
       spf[j] = min(spf[j], i);
     }
   }
  }
  for(int i = 1; i < N; i++) {
  	int x = i;
  	int cnt = 0;
    while(x > 1) {
      int k = spf[x];
      while(x % k == 0) {
      	cnt++;
      	x /= k;
      }
    }
    pre_cal[i] = pre_cal[i - 1] + cnt;
  }
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int pre_cal[N];
void solve() {
   int a, b; cin >> a >> b;
   cout << pre_cal[b] - pre_cal[a - 1] << endl;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i < N; i++) {
  	int x = i;
  	int cnt = 0;
    for(int j = 2; j * j <= x; j++) {
      if(x % j == 0) {
      	while(x % j == 0) {
      		cnt++;
      		x /= j;
      	}
      }
    }
    if(x > 1) cnt++;
    pre_cal[i] = pre_cal[i - 1] + cnt;
  }
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int pre_cal[N];
void solve() {
   int a, b; cin >> a >> b;
   int sum = 0;
   for(int i = a; i <= b; i++) {
  	int x = i;
  	int cnt = 0;
    for(int j = 2; j * j <= x; j++) {
      if(x % j == 0) {
      	while(x % j == 0) {
      		cnt++;
      		x /= j;
      	}
      }
    }
    if(x > 1) cnt++;
    sum += cnt;
   }
   cout << sum << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

