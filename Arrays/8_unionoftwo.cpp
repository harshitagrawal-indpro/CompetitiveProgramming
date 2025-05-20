#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3]={2,2,5};
    int brr[5]={4,4,6,6,7};
    int a=3 ; int b=5;
    int arr1[a+b];
    int i=0, j=0,k=0;
    while (i<a && j<b){
        if (arr[i]<arr[j]){
            if (arr[i]==arr[k-1]){
                i++;
            }else{
                arr1[k]=arr[i]; k++; i++;
            }
        }else if (arr[i]>arr[j]){
            if (arr[j]==arr[k-1]){
                j++;
            }else{
                arr1[k]=arr[j]; k++; j++;
            }
        }else{
            if (arr[i]==arr[k-1]){
                i++; j++;
            }else{
                arr1[k]=arr[i]; k++; i++; j++;
            }
        }
    }
    while (i<a){
        if (arr[i]==arr[k-1]){
            i++;
        }else{
            arr1[k]=arr[i]; k++; i++;
        }
    }
    while (j<b){
        if (arr[j]==arr[k-1]){
            j++;
        }else{
            arr1[k]=arr[j]; k++; j++;
        }
    }
    for (int i=0;i<k;i++){
        cout<<arr1[i]<<" ";
    }
}