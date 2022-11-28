#include <stdio.h>
int main()
{
    int i,m,n,sum=0;
    scanf("%d%d",&m,&n);
    for(i=n+1;i<m;i++){
      if(i%2!=0){
        sum+=i;
      }
    }
    printf("%d\n",sum);
    return 0;
}
