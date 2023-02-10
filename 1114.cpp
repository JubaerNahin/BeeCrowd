#include <iostream>
using namespace std;

int main() 
{
   int n;
   for(int i=0;;i++){
     cin>>n;
     if(n==2002){
       cout<<"Acesso Permitido"<<endl;
       break;
     }
     else{
       cout<<"Senha Invalida"<<endl;
     }
   }
}
