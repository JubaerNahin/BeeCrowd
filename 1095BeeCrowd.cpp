#include <iostream>
using namespace std;

int main() 
{
    int i=1,j=60;
    cout<<"I="<<i<<" "<<"J="<<j<<endl;
    for(int k=0;k<12;k++){
      i+=3;
      j-=5;
      cout<<"I="<<i<<" "<<"J="<<j<<endl;
    }
      
}