#include <iostream>
using namespace std;

int main() 
{
  int N,i,j,X,Y,count;
  cin>>N;
  for(i=0;i<N;i++){
  count=0;
  cin>>X>>Y;
  if(X>Y){
    for(j=Y+1;j<X;j++){
      if(j%2==0){
        continue;
      }
      else{
        count+=j;
      }
    }
    cout<<count<<endl;
   }
  
  else{
    for(j=X+1;j<Y;j++){
     if(j%2==0){
        continue;
      }
      else{
        count+=j;
      }
    }
     cout<<count<<endl;
   }
  }
}