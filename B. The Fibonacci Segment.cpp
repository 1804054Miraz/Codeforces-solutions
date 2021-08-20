#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    long long ar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];

    int res = min(n,2);
    int cn=2,left;

    for(int left=2;left<n;left++)
    {
        i = left;
        cn=2;
        for(;i<n;i++)
        {
            if(ar[i-1]+ar[i-2]!=ar[i])
                break;
            cn++;
        }
        res=max(res,cn);
        if(i==n)
            break;
        else
            left=max(left,i-1);
    }
    cout<<res<<endl;
}
