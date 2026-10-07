#include<stdio.h>
void main()
{
    int i,n,f;
    printf("enter the value:");
    scanf("%d",&n);
    if (n<0)
        printf("NO FATORIAL.");
    else
    {
        f=1;
        for(i=1;i<=n;i++)
            f=f*i;
    }
    printf("%d",f);
}
