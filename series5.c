#include<stdio.h>//1*2*3*4
int main()
{
    int i,n, result=1;
    printf("enter n:");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        result=result*i;//*i for squire if next
    }


printf("%d\n",result);


    return 0;
}
