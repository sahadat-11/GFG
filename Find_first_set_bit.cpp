//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int pos = -1, cnt = 0;
   while(n) {
     if(n & 1) {
        pos = cnt;
        break;
     }
     cnt++;
     n >>= 1;
   }
   cout << pos + 1 << "\n";
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int pos = -1;
   for(int i = 0; i < 32; i++) {
     int mask = (1 << i);
     if(mask & n) {
        pos = i;
        break;
     }
   }
   cout << pos + 1 << "\n";// for 1 index;
   return 0;
}