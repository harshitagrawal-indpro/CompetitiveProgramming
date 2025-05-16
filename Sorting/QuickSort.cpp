#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int i= low ; int j = high ;
    while(i<j){
        while(arr[i]<=arr[low]){
            i++;
        }
        while(arr[j]>arr[low]){
            j--;
        }
        if (i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
int quickSort(int arr[], int low, int high){
    if (low < high){
        int j = partition(arr,low,high);
        quickSort(arr,low,j-1);
        quickSort(arr,j+1,high);

    }
}

int main(){
    int arr[] = {10,7,8,9,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for (int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
}