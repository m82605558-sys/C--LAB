#include<stdio.h>
int main()
{
    int a[50],n,i,key,frequency=0;
     printf("enter number of elements:");
     scanf("%d",&n);
    if(n<1||n>50)
    {
      printf("enter a value from 1 to 50.\n");
        return 0;
    }
      printf("enter %d integers:",n);
     for(i=0; i<n; i++)
       scanf("%d",&a[i]);
     printf("enter element to search:");
     scanf("%d",&key);
     for (i=0; i<n; i++)
      {
        if (a[i]==key)
        {
        printf("element found at position%d\n",i+1);
        frequency++;
        }
        }
     if (frequency==0)
     printf("element not found.\n");
     else
     printf("total frequency=%d\n",frequency);
     return 0;
      }
    
     