# include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter number of rows:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Numbers of rows must be positive \n");
        return 0;
    }
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
         printf("%d",j);
         printf("\n");
    }
    return 0;
}

