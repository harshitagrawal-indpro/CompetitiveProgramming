#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n , int k){
    for (int i=0 ; i<n ; i++){
        if (arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,k ;
    cin >> n ;
    cin >> k;
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    int p= LinearSearch(arr,n,k);
    if (p==-1){
        cout << "Element not found" << endl;
    }else {
        cout << "Element found at index " << p << endl;
    }
}