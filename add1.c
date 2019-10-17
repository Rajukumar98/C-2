#include<stdio.h>
int main()
{
    int a[5],i,s=0;
    printf("Enter 5 number");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("Sum of 5 number is %d",s);
}
