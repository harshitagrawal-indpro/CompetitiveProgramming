#include<bits/stdc++.h>
using namespace std;

int main() {
  // optimised method
  int n ;
  cin >> n ;
  int arr[n];
  for (int i =0 ;i < n ; i++){
      cin >> arr[i];
  }
  int sum=0;
  for (int i=0 ; i<n ; i++){
      sum ^= arr[i];
  }
  cout << sum << endl;
  
  return 0;
}

// TC - O(N) and SC- O(1)