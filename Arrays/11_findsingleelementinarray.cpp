#include<bits/stdc++.h>
using namespace std;

int main() {
  // bruteforce method 
  int n ;
  cin >> n ;
  int arr[n];
  for (int i =0 ;i < n ; i++){
      cin >> arr[i];
  }
  for (int i=0 ; i< n ; i++){
      int count =0;
      for (int j =0 ; j<n;j++){
          if (arr[j]==arr[i]){
              count++;
          }
      }
      if (count==1){
          cout << arr[i] << endl;
      }
  }
  return 0;
}

// TC - O(n^2) and SC - O(1)