#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a%2==0 && b%2==0)
    {
        a=a/2;
        b=b*a;
        printf("%d\n",b);
    }
    else if(a%2==0 || b%2==0){
        if(a%2==0){
            a=a/2;
            b=b*a;
            printf("%d\n",b);
        }
        else {
            b=b/2;
            a=a*b;
            printf("%d\n",a);
        }
    }
    else
    {
        c=b;
        a=a/2;
        b=b/2;
        b=(c*a)+b;
        printf("%d\n",b);
    }
    return 0;
}
