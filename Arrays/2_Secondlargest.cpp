#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondLargestElement(int arr[], int n){
        int la,sl;
        int i=0, j=1;
        while(arr[i]==arr[j]){
            j++;
        }
        if (arr[i]<arr[j]){ 
            la=arr[j];
            sl=arr[i];}
        else {
            la=arr[i];
            sl=arr[j] ;}
        for (int i=2 ; i< n ; i++){
            if (arr[i]>la && arr[i]>sl){
                sl= la;
                la= arr[i];
            }
            else if (arr[i]<la && arr[i]>sl){
                sl=arr[i];
            }
            
        }
        return sl;
        
        
    }
};