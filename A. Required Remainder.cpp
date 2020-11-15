#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,k,x,y,test;
    cin>>test;
   for(int i=0;i<test;i++){
    cin>>x>>y>>n;
    if(n>=x)
    {
        k = n/x;
        p = k*x;
        p +=y;
        if(p>n)
        {
            k--;
            p = k*x;
            p +=y;
        }
        cout<<p<<endl;

    }
    else
    {
        n = y;
    cout<<n<<endl;
    }
    }
}
