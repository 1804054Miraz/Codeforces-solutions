#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,test,cn,tm_cn;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        cn = 0;
        while(a>0 and b>0)
        {
            tm_cn=0;
            if(a>b)
            {
                swap(a,b);
            }
            if((b-a)/a!=0)
            {
                tm_cn = (b-a)/a;
                b -=(tm_cn*a);
            }
            else
            {
                b -=a;
                cn++;
            }
            cn +=tm_cn;

        }
        cout<<cn<<endl;
    }
}
