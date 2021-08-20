//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+7;
const int mxN=2e5+5;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)      	cout << #x << "=" << x << endl
#define debug2(x, y)  	cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit(x) floor((log10(x))+1)

int main()
{
    speed;
    int neg,pos,i,n,test;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int ar[n];
        neg=pos=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]<0)
            {
                neg += ar[i];
            }
            else
                pos += ar[i];
        }
        sort(ar,ar+n);

        if(pos+neg!=0)
        {
            cout<<"YES\n";
            if(pos<abs(neg)){
            for(i=0;i<n;i++)
            {
                cout<<ar[i]<<" ";
            }
            }
            else
            {
               for(i=n-1;i>=0;i--)
            {
                cout<<ar[i]<<" ";
            }
            }
            cout<<endl;
        }
        else
            cout<<"NO\n";
    }
}

