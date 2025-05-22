#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3]={2,2,5};
    int brr[5]={4,4,6,6,7};
    int a=3 ; int b=5;
    int arr1[a+b];
    int i=0, j=0,k=0;

    while(i<a && j<b){
        if (arr[i]<brr[j]){
            if (!(k>0 && arr1[k-1]==arr[i])){
                arr1[k]=arr[i];
                k++;
            }
            i++;
        }else {
            if (!(k>0 && arr1[k-1]==arr[j])){
                arr1[k]=brr[j];
                k++;
            }
            j++;
        }
    }
    while(i < a ){
        if (!(k>0 && arr1[k-1]==arr[i])){
                arr1[k]=arr[i];
                k++;
            }
            i++;
    }
    while (j<b){
        if (!(k>0 && arr1[k-1]==arr[j])){
                arr1[k]=brr[j];
                k++;
            }
            j++;
    }


    for (int i=0;i<k;i++){
        cout<<arr1[i]<<" ";
    }
}