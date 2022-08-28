#include<stdio.h>
int main()
{
int a,b,c,r;
scanf("%d %d",&a,&b);
c=a-b;
r=c%10;
if(r<9)
c++;
else
c--;
printf("%d",c);
return 0;
}
