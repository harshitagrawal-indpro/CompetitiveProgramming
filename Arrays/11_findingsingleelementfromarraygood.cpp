#include<bits/stdc++.h>
using namespace std;

int main() {
  // best method using sorted maps 
  int n ;
  cin >> n ;
  int arr[n];
  for (int i =0 ;i < n ; i++){
      cin >> arr[i];
  }
  map <int , int > m ; // nlog(x) where x is size of map and x = (n+1)/2 for 1 element takes lox x and n takes n log x 
  for (int i=0 ; i<n ; i++){
      m[arr[i]]+=1;
  }
  for (auto i : m){ // takes x times complexity 
      cout << i.first << ":" << i.second << endl;
      if (i.second==1){
          cout<< i.first << " is single element!" << endl;
      }
  }
  return 0;
}