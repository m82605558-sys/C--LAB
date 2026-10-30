#include <stdio.h>
int main (void)
{
    long long n, temp,digit,reverse=0,sum=0;
    int count =0;
    printf("enter a positive integer:");
    scanf("%lld", &n);
if (n<=0)
{
    printf("please enter a positive integer.\n");
    return 0;
}
temp=n;
while (temp>0)
{
    digit=temp%10;
    count++;
    sum=sum+digit;
    reverse=reverse*10+digit;
     temp=temp/10;
}
printf("Number of digits=%lld\n");
printf("sum of digits=%lld\n",sum);
printf("Reversed number = %lld\n",reverse);
if (reverse==n)
    printf("%lld is a palindrome.\n",n);
 else
    printf("%lld is not a palindrome.\n",n);
    return 0;   
}