#include<bits/stdc++.h>
using namespace std;

int main() {
  // best method 
  int n ;
  cin >> n ;
  int arr[n];
  for (int i =0 ;i < n ; i++){
      cin >> arr[i];
  }
  map <int , int > m ;
  for (int i=0 ; i<n ; i++){
      m[arr[i]]+=1;
  }
  for (auto i : m){
      cout << i.first << ":" << i.second << endl;
      if (i.second==1){
          cout<< i.first << " is single element!" << endl;
      }
  }
  return 0;
}