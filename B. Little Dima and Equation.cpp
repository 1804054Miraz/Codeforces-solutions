#include<bits/stdc++.h>
using namespace std;
//We find s(x)=1,2,3,,,,,,81.Since from 1 to 10e9, lowest sum=1(1) and highest sum=81(999999999)
int main()
{
    long long a,b,c,x,i,j,n;
    cin>>a>>b>>c;
    vector<long long>vec;
    for(i=1;i<=81;i++)
    {
        long long sum=0,p=1;
        for(j=1;j<=a;j++)
        {
            p *=i;
        }
        n = b*p+c;
        if(n>int(1e9))
            continue;
        x=n;
        while(n)
        {
            sum += n%10;
            n/=10;
        }
        if(sum==i)
        {
            //cout<<i<<endl;
            //cout<<p<<endl;
            vec.push_back(x);
        }

    }
    cout<<vec.size()<<endl;
    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}
