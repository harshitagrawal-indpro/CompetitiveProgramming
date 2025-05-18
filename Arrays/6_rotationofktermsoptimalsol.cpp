#include<bits/stdc++.h>
using namespace std;

int main() {
  // rotation of the arrays using reversal method
  int n ;
  cin >> n ;
  int k ;
  cin >> k ;
  int arr[n];
  for(int i =0 ; i<n ; i++){
      cin >> arr[i] ;
  }
  
  reverse(arr,arr+k);
  reverse(arr+k,arr+n);
  reverse(arr,arr+n);
  
  for (int i=0 ; i<n ;i++){
      cout << arr[i] << " ";
  }
  return 0;
}