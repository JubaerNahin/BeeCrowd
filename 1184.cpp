#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    char T;
    cin>>T;
    float arr[12][12],count=0,tot=0,avg=0;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
        cin>>arr[i][j];  
      }
    
    }
    
     for(int j=0;j<12;j++){
      for(int i=j+1;i<12;i++){
        tot++;
        count+=arr[i][j];  
      }
        
     }
     if(T=='S'){
        printf("%.1f\n",count);
     }
      else{
        avg=count/tot;
        printf("%.1f\n",avg);
      }
}