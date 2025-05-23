// to make uinon of two using a set - sorted and unique 

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , m ;
    cin >>  n >> m ;
    int k=m+n;
    int a[n];int b[m];vector <int> ve;
    set <int> s ;

    // taking inputs
    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for (int i=0 ; i<m ; i++){
        cin >> b[i];
    }


    // MAKING SET FROM BOTH ARRAYS 
    for (int i=0 ; i<n ; i++){
        s.insert(a[i]); // O(N LOG N)
    }
    for (int i=0 ; i<m ; i++){
        s.insert(b[i]); // O(M LOG M)
    }

    for (int i : s){
        ve.push_back(i); // O(N+M)
    }

    for (auto i: ve){
        cout << i << " ";
    }
}

// tc - O(N+M)log(M+N) SC = O(M+N)