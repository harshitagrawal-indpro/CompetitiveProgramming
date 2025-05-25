// this is the elements that can repeat atmost twice 
#include<bits/stdc++.h>
using namespace std;

int removeDup(vector<int>& arr) {
       int i=2;
       int n = arr.size();
       for(int k=2 ; k<n ; k++){
           if(arr[k]!=arr[i-2]){
               arr[i]=arr[k];
               i++;
           }
       }
       return i;
        
    }
    
