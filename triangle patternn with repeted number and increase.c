#include<stdio.h>
int main()
{
    int i ,row,j,k=1;
    printf("enter number of row:");
    scanf("%d",&row);

    for(i=1;i<=row; i++)
    {
        for(j=1;j<=i;j++)
          printf("%d",j);// ony change here


        printf("\n");


    }


// to repet like 1 22 333 4444..... just change j and put i in last line











    return 0;
}
