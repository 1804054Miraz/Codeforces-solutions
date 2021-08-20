///Bismillahir Rahmanir Rahim
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
const int mxN=2e5+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
bool ans,mark[3001];
int main()
{
    int n,i,j,sum=1,test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int ar[n];
            reset(mark);
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>=0)
            {
                mark[ar[i]]=1;
            }
            ar[i]=abs(ar[i]);
        }
        sort(ar,ar+n);
        int mins=0;
        sum=1;

        for(i=n-1;i>=n-4;i--)
        {
            if(mark[ar[i]]==0)
            {
                mins++;
            }
            sum = sum*ar[i];
        }
        if(mins%2)
        {
            for(;i>=0;i--)
            {
                if(mark[ar[i]]==0)
                {
                    sum = sum*ar[i];
                    break;
                }
            }
        }
        else
        {
            for(;i>=0;i--)
            {
                if(mark[ar[i]])
                {
                    sum = sum*ar[i];
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }

}

