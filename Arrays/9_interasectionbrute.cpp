// intersection brute algorithmn
// by Harshit Agrawal 2

#include<bits/stdc++.h>
using namespace std;

int main() {
  int m, n ;
  cin >> n >> m;
  int arr1[n], arr2[m];
  for (int i=0; i<n ; i++){
      cin >> arr1[i];
  }
  for (int i=0; i<m ; i++){
      cin >> arr2[i];
  }

  vector <int> temp(m,0);
  
  for (int i=0;i<n;i++){
      for(int j=0;j<m;j++ ){
          if(arr1[i]==arr2[j] && temp[j]==0){
              temp[j]=1;
          }
      }
      
      }
  
  for (int i=0;i<m;i++ ){
      if (temp[i]!=0){
          cout<< arr2[i] << endl;
      }
  }
  return 0;
}