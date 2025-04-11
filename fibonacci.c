// creating Fibonacci sequence using while
#include<stdio.h>
int main()
{
    int  count;  //  number of fibonacci
    int firstTerm=0,secondTerm=1,nextTerm; // initialize

printf("enter count:");
scanf("%d",&count);
  printf("first %d Fibonacci number:\n",count);

// while loop for generating fibonacci
//fibonacci are next number is equal to 1st two digit

    while (count>0)
    {
        printf("%d",firstTerm);// first fibo seq starts with 0
        nextTerm = firstTerm+secondTerm;// second one is 0+1
        firstTerm = secondTerm;// now first=1
        secondTerm = nextTerm;
        count--;// decrese count

    }


    return 0;
}
