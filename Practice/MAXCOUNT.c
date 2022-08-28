#include<stdio.h>
int main()
{
        int t;
        scanf("%d",&t);
        int n,num,i,max,maxi;
        while(t--)
        {
                int a[10001]={0};
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                        scanf("%d",&num);
                        a[num]++;
                }
                max=0;
                for(i=0;i<10001;i++)
                {
 
                        if(a[i]>max)
                        {
                                max=a[i];
                                maxi=i;
                        }
                }
                printf("%d %d\n",maxi,max);
        }
 
 
 
 
        return 0;
}
