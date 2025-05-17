// get the larget number of the array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {5 , 3 , 1 , 7 , 4 , 2 };
    int max= 0;
    for (int i=1;i<6;i++){
        if (arr[max]<arr[i]){
            max=i;
        }
    }
    cout << "The greatest element is " << arr[max] << endl;
}