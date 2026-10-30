# include <stdio.h>
int main ()
{
    int a[50],n,i;
    int sum=0,largest,smallest;
    int even=0, odd=0;
    float mean;
    printf("enter number of elements:");
    scanf("%d",&n);
    if (n<1 || n>50)
    {
        printf("enter a value from 1 to 50.\n");
        return 0;
    }
    printf("enter %d integers:",n);
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
     largest=a[0]; 
     smallest=a[0];
  for(i=0; i<n; i++)
    {
        sum=sum+a[i];
  if (a[i]>largest)
    largest=a[i];
  if (a[i]<smallest)
     smallest=a[i];
  if (a[i]%2==0)
      even++;
    else
     odd++;
    }
    mean=(float)sum /n;
    printf("sum=%d\n",sum);
    printf("mean=%f\n",mean);
    printf("largest=%d\n",largest);
    printf("smallest=%d\n",smallest);
    printf("even elements=%d\n",even);
    printf("odd elements=%d\n",odd);
    return 0;
}