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
  int max =arr[0];
  for (int i=0 ; i<n ; i++){
      if (arr[i]> max ){
          max = arr[i];
      }
  }
  vector <int> temp(max+1,0);
  for (int i=0 ; i<n ; i++){
     temp[arr[i]]+=1;
  }
  for (int i=0; i<max+1; i++){
      if (temp[i]==1){
          cout << i << endl;
      }
  }
  return 0;
}

// TC - O(N) and SC - O(N)