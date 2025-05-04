#include<bits/stdc++.h>
using namespace std;
//  uses backtracking method
void prints(int i, int j){
    if (i==j+1){
        return;
    }
    else {
        cout << i << endl;
        prints(i+1,j);
    }
}
int main(){
    int i=1 , j=5;
    prints(i,j);
    return 0;
}