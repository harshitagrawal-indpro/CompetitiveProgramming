#include<bits/stdc++.h>
using namespace std;
// rotation of kth terms 
int main() {
  // rotation of the arrays 
  int n ;
  cin >> n ;
  int k ;
  cin >> k ;
  int arr[n];
  int temp[k];
  for(int i =0 ; i<n ; i++){
      cin >> arr[i] ;
  }
  // step  1 taking the temp list to store 
  for(int i=0 ; i<k ; i++){
      temp[i]=arr[i];
  }
  // step 2 to move the rest elements in front 
  for (int i=k;i<n;i++){
      arr[i-k]=arr[i];
  }
  // to put the temp elements in to the array back
  for(int i=0; i<k;i++){
      arr[k+i-1]= temp[i];
  }
  
  for (int i=0 ; i<n ;i++){
      cout << arr[i] << " ";
  }
  return 0;
}