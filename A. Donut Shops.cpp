#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    long long int a,b,c,first,second;
    while(test--)
    {
        cin>>a>>b>>c;
        if(a<c)
        {
            cout<<1<<" ";
        }
        else if(a>=c)
        {
            cout<<-1<<" ";
        }

        if(c<(a*b))
        {
            cout<<b<<" ";
        }
        else if(c>=(a*b))
        {
            cout<<-1<<" ";
        }
        cout<<"\n";
    }
}
