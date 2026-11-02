#include <stdio.h>
int main()
{
    int a[50],original[50];
    int n, i, j,temp;
    printf("Enter number of the elements:");
    scanf("%d",&n);
    if (n<1||n>50)
    {
        printf("enter a value from 1to50.\n");
        return 0;
    }
printf("enter %d integers:",n);
for( i=0; i<n; i++)
{
    scanf("%d",&a[i]);
    original[i]=a[i];
}
for(i=0; i<n-1; i++)
{
    for(j=0; j<n-1-i; j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
printf("original array:");
for(i=0; i<n; i++)
printf("%d",original[i]);
printf("\n Asecnding order:");
for(i=0; i<n; i++)
printf("%d",a[i]);
printf("\n Desecnding order:");
for(i=n-1; i>=0;i--)
printf("%d",a[i]);
printf("\n");
return 0;
}