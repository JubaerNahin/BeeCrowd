#include <iostream>
using namespace std;

int main() 
{
    int X,Y;
    for(int i=0;;i++){
      cin>>X>>Y;
      if(X>Y){
        cout<<"Decrescente"<<endl;
      }
      else if(X<Y){ 
        cout<<"Crescente"<<endl;
    }
      else{
        break;
      }
    }
}