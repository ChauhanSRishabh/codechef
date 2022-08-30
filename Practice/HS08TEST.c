    #include<stdio.h>
    int main()
    {
    float y,e;
    int x;
    scanf("%d%f",&x,&y);
    if((y-x)>=1)
    {
    if(x%5==0)
    {
    e=((y-x)-(0.50));
    printf("%.2f",e);
    }
    else
    {
    printf("%.2f",y);
    }
    }
    else
    {
    printf("%.2f",y);
    }
    return 0;
    } 
