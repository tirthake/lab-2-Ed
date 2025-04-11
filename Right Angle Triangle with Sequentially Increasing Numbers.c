//Right Angle Triangle with Sequentially Increasing Numbers
#include<stdio.h>
int main()
{
    int i,j,rows,k=1;

    printf("enter number of rows:");
    scanf("%d",&rows);


    for(i=1;i<=rows; i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",k++);


    printf("\n");
    }

    return 0;
}
