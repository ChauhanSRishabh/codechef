#include<stdio.h>
int main()
{
int i,n,k,d,t=0;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&d);
if(d%k==0)
t++;
}
printf("%d",t);
return 0;
}
