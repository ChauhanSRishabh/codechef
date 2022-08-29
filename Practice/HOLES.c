#include<stdio.h>
#include<string.h>
int main()
{
int c,i,j;
scanf("%d",&c);
for(i=1;i<=c;i++)
{
char str[100];
int x,s=0;
scanf("%s",str);
x=strlen(str);
for(j=0;j<x;j++)
{
switch(str[j])
{
case 'B':
s+=2;
break;
case 'A':
case 'D':
case 'O':
case 'P':
case 'Q':
case 'R':
s+=1;
break;
}
}
printf("%d\n",s);
}
return 0;
}




