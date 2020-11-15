#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    long long int n,i;
    for(i=0;i<test;i++)
    {
        cin>>n;
        if(n%4==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
