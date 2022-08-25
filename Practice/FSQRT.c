#include<stdio.h>
#include<math.h>
int main()
{
	int i,t,n,s[1000]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		s[i]=sqrt(n);
	}
	for(i=0;i<t;i++)
		printf("%d\n",s[i]);
	return 0;
}
