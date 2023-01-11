#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i,M,N,count=0;
    for(i=0;;i++){
      cin>>M>>N;
      if(M<=0 || N<=0) break;
      count=0;
      if(M>N){
        for(int j=N;j<=M;j++){
          count+=j;
          cout<<j<<" ";
        }
        cout<<"Sum="<<count<<endl;
      }
      else{
        for(int j=M;j<=N;j++){
          count+=j;
          cout<<j<<" ";
        }
        cout<<"Sum="<<count<<endl;
      }
      
     }
}
