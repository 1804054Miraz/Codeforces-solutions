///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,r,test;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld%lld",&n,&r);
        if(n<=r)
        {
            printf("%lld\n",(n*(n+1)/2)-(n-1));
        }
        else
            printf("%lld\n",(r*(r+1))/2);
    }
    return 0;
}

