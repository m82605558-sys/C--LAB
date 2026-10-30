# include <stdio.h>
int main()
{
    int n,terms,i;
    unsigned long long factorial=1;
    unsigned long long first=0,second=1,next;
    printf("enter a non-negative integer for factorial:");
    scanf("%d",&n);
    if(n<0||n>20)
    {
        printf("enter a value from 0 to 20.\n");
        return 0;
    }
    for(i=1; i<=n; i++)
     factorial = factorial*i;
     printf("factorial=%llu\n",factorial);
     printf("Enter number of Fibonacci terms:");
     scanf("%d",&terms);
     if(terms<=0)
     {
        printf("Number of terms must be positive.\n");
        return 0;
     }
     printf("Fibonacci series:");
     for(i=1; i<=terms; i++)
     {
      printf("%llu",first);
      next=first+second;
      first=second;
      second=next;
     }
     printf("\n");
     return 0;
    }
    
    
