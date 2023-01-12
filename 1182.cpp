#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    int L;
    char T;
    cin>>L>>T;
    float arr[12][12],count=0,avg=0;
    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
        cin>>arr[i][j];  
      }
    }
    
     for(int j=L;;j++){
      for(int i=0;i<12;i++){
        count+=arr[i][j];  
      }
        if(T=='S'){
        printf("%.1f\n",count);
     }
      else{
        avg=count/12;
        printf("%.1f\n",avg);
      }
      break;
     }
}