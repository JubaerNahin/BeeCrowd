#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    char O;
    cin>>O;
    double M[12][12],count=0,tot=0,avg=0;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
        cin>>M[i][j];  
      }
    
    }
    
     for(int i=11;i>6;i--){
      for(int j=i-1;j>11-i;j--){
        tot++;
        count+=M[i][j];  
      }
        
     }
     if(O=='S'){
        printf("%.1lf\n",count);
     }
      else{
        avg=count/tot;
        printf("%.1lf\n",avg);
      }
}        