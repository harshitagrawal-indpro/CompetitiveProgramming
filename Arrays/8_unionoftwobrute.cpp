// to make uinon of two using a set - sorted and unique 

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , m ;
    cin >>  n >> m ;
    int k=m+n;
    int a[n];int b[m];vector <int> ve;

    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for (int i=0 ; i<m ; i++){
        cin >> b[i];
    }

    set <int> s ;
    for (int i=0 ; i<n ; i++){
        s.insert(a[i]);
    }
    for (int i=0 ; i<m ; i++){
        s.insert(b[i]);
    }

    for (int i : s){
        ve.push_back(i);
    }

    for (auto i: ve){
        cout << i << " ";
    }
}