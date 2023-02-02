#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,R1,R2,d;
    cin>>a>>b>>c;
    d=((b*b)-(4*a*c));
    if(d<0||a==0){
      cout<<"Impossivel calcular"<<endl;
    }
    else{
      R1=(((-b) + sqrt (d))/(2*a));
      R2=(((-b) - sqrt (d))/(2*a));
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
    return 0;
}