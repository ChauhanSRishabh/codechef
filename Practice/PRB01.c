#include<stdio.h>
int main()
{
  int f,t,i,n;
  scanf("%d",&t);
  while(t!=0)
   {
    scanf("%d",&n);
    f=0;
    for(i=2;i<n;i++)
    {
      if(n%i==0)
      {
        f=1;
        break;
      }
    }
    if(f==0)
      printf("yes \n");
    else
      printf("no \n");
    t--;
   }
    return 0;
}

