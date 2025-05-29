#include<bits/stdc++.h>
using namespace std;

int main() {
  int curr = 0;
  int max = 0;
  vector <int> v = {1,0,1,0,1,1,0,1};
  
  for (int i=0 ; i<8; i++){
      if (v[i]==0){
          curr=0;
      }
      else {
          curr+=1;
          if (curr>max){
              max=curr;
          }
      }
  }
  cout<< max << endl;
  return 0;
}