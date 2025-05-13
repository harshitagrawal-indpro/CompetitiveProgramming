#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int n ){
    int temp;
    for (int i =0; i< n ; i++ ){
        for (int j =0 ; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= temp;
            }
        }
    }
    for (int i =0 ; i<n ; i++){
        cout<< arr[i] << endl;
        
    }
}

int main() {
    int arr[]= {10,5,7,9,8};
    int n = 5;
   BubbleSort(arr,n);
  return 0;
}