#include<stdio.h>
int main()
{
	int i,t,s[1000]={0},a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a,&b);
		s[i]=a+b;
	}
	for(i=0;i<t;i++)
		printf("%d\n",s[i]);
	return 0;
}
