#include<stdio.h>
int main()
{
int num,rev=0,rem=0;
printf("\nEnter the number:");
scanf("%d",&num);
while(num!='\0')
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
printf("\nThe reverse number is:%d",rev);
return 0;
}
