#include<stdio.h>
int main()
{
	int i,t,a,b,c,o[1000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(((a+b+c)==180)&a!=0&b!=0&c!=0)
		o[i]=1;
		else
		o[i]=0;
	}
	for(i=0;i<t;i++)
	{
		if(o[i]==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
