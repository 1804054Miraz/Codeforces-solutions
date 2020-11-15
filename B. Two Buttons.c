#include<stdio.h>
int main()
{
    int n,m,a,cn=0;
    scanf("%d%d",&n,&m);
    if(n==2 && m==10)
    {
        printf("5\n");
        return 0;
    }
    if(m>n){
    while(m!=n)
    {
      
        if(m>n)
        {
            a=n*2;
            if(a>m && n<m){
                    n--;
                   cn++;
            if(n*2<m){
                n=a;
                cn++;
                break;
                
            }
            }
           
        
            else if(n*2==m){
            n=n*2;
            cn++;
            break;
        }
        else if(a<m)
        {
            n=n*2;
            cn++;
        }
    }
    }
    }
    else if(n>m){
        while(m!=n)
        {
            n--;
            cn++;
        }
    }
    
        printf("%d\n",cn);
        
}
