#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int left , int mid , int right ){
    int i= left ;
    int j = mid+1;
    int k=0 ;
    int n = right - left + 1 ;
    int arrn[n];
    while (i<=mid && j <=right ){
        if (arr[i]<arr[j]){
            arrn[k]= arr[i];
            k++; i++;
        }else {
            arrn[k]= arr[j];
            k++; j++;

        }}
    while (i<=mid){
        arrn[k]=arr[i];
        k++; i++;

    }
    while (j<=right ){
        arrn[k]=arr[j];
        k++; j++;
    }
    for (int i=0; i<n ;i++){
        arr[left+i]= arrn[i];
    }
    }


void mergeSort(int arr[], int left , int right ){
    if (left==right )return;
    int mid = (left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);

}

int main(){
    int arr[]={5,3,4,1,2};
    mergeSort(arr,0,4);
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}