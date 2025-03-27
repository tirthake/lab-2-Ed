// find the first and last digit of a number input from user.#
#include<stdio.h>
int main()
{
     int num,firstDigit,lastDigit,temp;
     printf("enter a number:");
     scanf("%d",&num);



lastDigit=num%10;

temp=num;
while(temp>=10)
{
    temp/=10;
}

firstDigit=temp;

printf("First digit=%d\n",firstDigit);
printf("lastDigit=%d\n",lastDigit);



return 0;
}
