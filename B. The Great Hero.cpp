#include<bits/stdc++.h>
#define  ll long long int
using namespace std;
int main()
{
    ll t,A,B,n;
cin>>t;
while(t--)
{
cin>>A>>B>>n;
ll ar[n],br[n];
ll p,req=0;
for(int i=0;i<n;i++)
{
cin>>ar[i];
}
for(int i=0;i<n;i++)
{
 cin>>br[i];
}
for(int i=0;i<n;i++)
{
p=ceil(double(br[i])/A);
//p=(br[i]+A-1ll)/A;
req += (p*ar[i]);
}
sort(ar,ar+n);
req -= ar[n-1];
B -= req;
if(B>0)
cout<<"YES\n";
else
cout<<"NO\n";
}
}
