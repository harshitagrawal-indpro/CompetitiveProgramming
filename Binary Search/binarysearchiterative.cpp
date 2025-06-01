#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ,target;
  cin >> n ;
  cin >> target;
  int arr[n];
  for (int i =0 ; i< n ; i++){
      cin >> arr[i];
  }
  
  int low = 0;
  int high = n-1 ;
  while(low <= high ){
      int mid = (low + high)/2 ;
      if (arr[mid]== target){
          cout << "element found at" << mid << endl;
          return 0;
      }
      else if (arr[mid]<target){
          low = mid +1 ;
      }
      else {
          high= mid -1 ;
      }
  }
  cout << "element not found" << endl;
  return 0;
}