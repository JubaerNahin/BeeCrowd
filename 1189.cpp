#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    char O;
    cin>>O;
    float M[12][12],t=0,T=0,first=0,last=0,count=0,tot=0,avg=0;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
        cin>>M[i][j];  
      }
    }
     for(int i=1;i<6;i++){
      for(int j=0;j<=i-1;j++){
        T++;
        first+=M[i][j];  
      }
     }
      for(int i=6;i<11;i++){
      for(int j=10-i;j>=0;j--){
        t++;
        last+=M[i][j];  
      }
     }
     count=first+last;
      tot=T+t;
     if(O=='S'){
        printf("%.1f\n",count);
     }
      else{
        avg=count/tot;
        printf("%.1f\n",avg);
      }
}
