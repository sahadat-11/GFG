//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   int cnt =  0;
   for(int i = 0; i < 32; i++) {
     bool bit1 = a & (1 << i);
     bool bit2 = b & (1 << i);
     if(bit1 != bit2) cnt++;
   }
   cout << cnt << "\n";
   return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b; cin >> a >> b;
   int XOR = a ^ b;
   int cnt = __builtin_popcount(XOR);
   cout << cnt << "\n";
   return 0;
}
//https://prnt.sc/StahXR-Pg43Q
//https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/