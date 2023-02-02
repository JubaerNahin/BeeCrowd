#include <iostream>
using namespace std;

int main() 
{
  double N;
  int m,n100,n50,n20,n10,n5,n2,c1,c50,c25,c10,c05,c01;
  cin>>N;
  m=N;
  n100=m/100;
  m=m%100;
  n50=m/50;
  m=m%50;
  n20=m/20;
  m=m%20;
  n10=m/10;
  m=m%10;
  n5=m/5;
  m=m%5;
  n2=m/2;
  c1=m%2;
  m=N*100;
  m=m%100;
  c50=m/50;
  m=m%50;
  c25=m/25;
  m=m%25;
  c10=m/10;
  m=m%10;
  c05=m/5;
  c01=m%5;
  cout<<"NOTAS:"<<endl;
  cout<<n100<<" nota(s) de R$ 100.00"<<endl;
  cout<<n50<<" nota(s) de R$ 50.00"<<endl;
  cout<<n20<<" nota(s) de R$ 20.00"<<endl;
  cout<<n10<<" nota(s) de R$ 10.00"<<endl;
  cout<<n5<<" nota(s) de R$ 5.00"<<endl;
  cout<<n2<<" nota(s) de R$ 2.00"<<endl;
  cout<<"MOEDAS:"<<endl;
  cout<<c1<<" moeda(s) de R$ 1.00"<<endl;
  cout<<c50<<" moeda(s) de R$ 0.50"<<endl;
  cout<<c25<<" moeda(s) de R$ 0.25"<<endl;
  cout<<c10<<" moeda(s) de R$ 0.10"<<endl;
  cout<<c05<<" moeda(s) de R$ 0.05"<<endl;
  cout<<c01<<" moeda(s) de R$ 0.01"<<endl;
  return 0;
  
}