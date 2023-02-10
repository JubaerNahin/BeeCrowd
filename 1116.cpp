#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    float X,Y;
    for(int i=0;i<N;i++){
      cin>>X>>Y;
      if(Y==0) cout<<"divisao impossivel"<<endl;
      else if(X==0) cout<<"0.0"<<endl;
      else{
        float R=X/Y;
        printf("%.1f\n",R);
      }
    }
}