#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, sum =0,sun=0;
  cin >> n ;
  int arr[n];
  for(int i=0 ; i<n-1 ; i++){
      cin >> arr[i];
  }
  for (int i =0; i<n-1 ; i++){
      sum = sum ^ arr[i];
  }
  for(int i=0 ; i<=n;i++){
      sun= sun ^i;
  }
  cout<< (sun^sum);
  return 0;
}