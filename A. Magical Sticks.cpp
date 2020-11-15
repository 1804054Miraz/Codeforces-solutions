///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
       else if(n%2==0)
        {
            cout<<n/2<<endl;
        }
        else
            cout<<(n/2)+1<<endl;
    }
    return 0;
}

