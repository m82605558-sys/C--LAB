# include <stdio.h>
int main(void)
{
    int n, temp, digit, count=0, sum=0;
    int i,power;
  printf("enter a positive integer:");
  scanf("%d",&n);
if(n<=0)
  {
   printf("please enter a positive integer.\n");
       return 0;
  }
  temp = n;
  while(temp>0)
  {
    count++;
    temp= temp/10;
  }
  temp =n;
  while(temp>0)
  {
    digit=temp % 10;
    power=1;
for (i=0; i<count;i++)
   power=power*digit;
   sum=sum+power;
   temp=temp/10;
  }
if(sum == n)
  printf("%d is an Armstrong number.\n",n);
else
  printf("%d is not an Armstrong number.\n",n);
    return 0;
}
