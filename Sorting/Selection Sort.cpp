#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){
    for (int i =0 ; i<n-1 ; i++){
        int min= i ;
        for (int j = i+1 ; j<n ; j++){
            if (arr[min]> arr[j]){
                int temp = arr[min];
                arr[min]= arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i =0 ; i<n ; i++){
        cout << arr[i] << endl;
    }
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i =0 ; i< n ; i++){
      cin >> arr[i];
  }
  SelectionSort(arr,n);
  return 0;
}