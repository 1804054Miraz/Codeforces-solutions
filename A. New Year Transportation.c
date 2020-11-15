#include<stdio.h>
int main()
{
    int n,t,i;
    int a[100000];
    scanf("%d%d",&n,&t);
    for( i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=1;i<t;)
    {
        i=i+a[i];
    }
    if(i==t)
    printf("YES\n");
    else
        printf("NO\n");
}
