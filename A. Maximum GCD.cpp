#include<bits/stdc++.h>
using namespace std;
bool prime[1000005];
int  main()
{
    sieve();
    int a,b,mx_gcd,n,value;
    cin>>n;
    while(n--)
    {
        cin>>value;
        a = value - 1;
    if(value%2)
    {
        value--;
        a--;
    }
        while(value%a!=0 && a>1)
        {
            a--;
        }
        cout<<a<<endl;
    }
}
