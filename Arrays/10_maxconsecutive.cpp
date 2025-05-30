// its a good method to solve and fine the missing number 

#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n ;
  int arr[n],temp[n+1];
  for(int i=0 ; i<n-1 ; i++){
      cin >> arr[i];
  }
  for (int i =0; i<n-1 ; i++){
      temp[arr[i]]= 1;
  }
  for (int i=1; i<n+1; i++){
      if (temp[i]==0){
          cout << i <<endl;
      }
  }
  
  return 0;
}