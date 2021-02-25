// activity 9
#include<stdio.h>
int main()
{
    int n,a[20],sum=0;
    printf("enter the total numbers\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         printf("enter the new number\n");
         scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    printf("the total sum is %d\n",sum);
    return 0;
}
