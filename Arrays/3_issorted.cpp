#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    for (int i=0; i<n ; i++){
        cin >> arr[i];

    }
    for (int i=0 ; i<n-1; i++){
        if (arr[i]>arr[i+1]){
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
    return 0;

}