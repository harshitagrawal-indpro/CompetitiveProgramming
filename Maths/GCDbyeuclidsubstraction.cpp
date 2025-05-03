#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b,k ;
  cin >> a >> b ;
  int GCD=1;
  
  while (a!=0 && b!=0){
      k= ((a-b)<0)?-1*(a-b):(a-b);
      b= min(a,b);
      a=k;
    //   cout << a << b << endl;
  }
  
  cout << b;
  return 0;
}