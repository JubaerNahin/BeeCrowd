#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N,I,tot=0,rab=0,rat=0,frog=0;
    float Cp=0,Rp=0,Sp=0;
    char c;
    cin>>N;
    for(int i=0;i<N;i++){
      for(int j=0;j<1;j++){
        cin>>I>>c;
        if(c=='C') rab+=I;
        if(c=='R') rat+=I;
        if(c=='S') frog+=I;
        tot+=I;
      }
    }
    Cp=((rab*100)/(1.0*tot));
    Rp=((rat*100)/(1.0*tot));
    Sp=((frog*100)/(1.0*tot));
    cout<<"Total: "<<tot<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<rab<<endl;
    cout<<"Total de ratos: "<<rat<<endl;
    cout<<"Total de sapos: "<<frog<<endl;
    printf("Percentual de coelhos: %.2f %\n",Cp);
    printf("Percentual de ratos: %.2f %\n",Rp);
    printf("Percentual de sapos: %.2f %\n",Sp);
    
}