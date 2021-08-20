//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+7;
const int mxN=3e5+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
#define bug 1
int first[mxN],last[mxN],res[mxN],ar[mxN];
int main()
{
    speed;
    int n,test,i,a,b;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            first[i]=last[i]=0,res[i]=-1;

        for(i=1;i<=n;i++){
           cin>>ar[i];
            a = ar[i];
            first[a]=max(first[a],i-last[a]);
            last[a]=i;
        }
        if(bug){
        for(i=1;i<=n;i++)
            cout<<first[i]<<" ";
        cout<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<last[i]<<" ";
        }
        cout<<endl;
        }
        for(i=1;i<=n;i++)
        {
           first[i]=max(first[i],n-last[i]+1);
            for(a=first[i];a<=n and res[a]==-1;a++)
            {
                    res[a]=i;
            }
        }
        if(bug){
        for(i=1;i<=n;i++)
            cout<<first[i]<<" ";
        cout<<endl;
        }
        for(i=1;i<=n;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;


    }
}
