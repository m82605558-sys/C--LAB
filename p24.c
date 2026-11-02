#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0,largest,smallest;
    int*p;
    float average;
    printf("enter number of integers:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("number of elements must be positive.\n");
        return 0;
    }
    p=(int*)malloc(n*sizeof (int));
    if(p==NULL)
    {
        printf("memory allocation failed.\n");
        return 0;
    }
    printf("enter %d integers:",n);
    for(i=0;i<n;i++);
    scanf("%d",p+i);
    largest=*p;
    smallest=*p;
    for(i=0; i<n; i++)
    {
        sum=sum+*(p+i);
        if(*(p+i)>largest)
        largest=*(p+i);
        if(*(p+i)>smallest)
        smallest=*(p+i);
    }
    average=(float)sum/n;
    printf("sum=%d\n",sum);
    printf("average=%f\n",average);
    printf("largest=%d\n",largest);
    printf("smasllest=%d\n",smallest);
    free(p);
    return 0;
}
