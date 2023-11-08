//User function template for C++
class Solution{
public:  
   int findKRotation(int arr[], int n) {
       // code here
       int low = 0, high = n - 1;
      while(low <= high) {
      int mid = low + (high - low) / 2;
      if(arr[mid] < arr[mid - 1]) return mid;
      if(arr[mid] > arr[mid + 1]) return mid + 1;
      if(arr[mid] > arr[high]) {
         low = mid + 1;
      }
      else high = mid - 1;
      }
   }

};

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int rotation(int a[], int n) {
   int l = 0, r = n - 1;
   while(l <= r) {
      int m = l + (r - l) / 2;
      if(a[m] > a[m + 1]) return m + 1;
      else if(a[m] < a[m - 1]) return m;
      else if(a[0] > a[n - 1] and a[l] <=  a[m]) l = m + 1;
      // (a[0] > a[n - 1]) this condition is for if array is sorted
      // 1 4 5 23; ans = 0; if we dont this condition ans = 4;
      else if(a[m] <= a[n - 1]) r = m - 1;
   }
   return 0;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int k = rotation(a, n);
   cout << k << endl;
   return 0;
}

