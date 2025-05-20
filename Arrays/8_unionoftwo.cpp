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
        }
    }
}