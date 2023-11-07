//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int rotation(int a[], int n, int key) {
   int l = 0, h = n - 1;
   while(l <= h) {
            int m = l + (h - l) / 2;
            if(a[m] == key) return m;
            else if(a[m] >= a[l]) {
                if(a[l] <= key and a[m] >= key) h = m - 1;
                else l = m + 1;
            }
            else {
                if(a[m] <= key and a[h] >= key) l = m + 1;
                else h = m - 1;
            }
   }
   return -1;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, key; cin >> n >> key; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int k = rotation(a, n, key);
   cout << k << endl;
   return 0;
}