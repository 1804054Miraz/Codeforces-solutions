//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=1e9+7;
const int mxN=3000000;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)  cout << #x << "=" << x << endl
#define debug2(x, y)  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
int main()
{
   ll t,d,x,y,k;
    cin>>t;
    while(t--)
    {
        cin>>d>>k;
        x=y=0;

        while(1)
        {
            if(x<=y and ((x+k)*(x+k)+y*y)<=d*d)
            {
                x+=k;
            }
            else if(y<x and ((y+k)*(y+k)+x*x)<=d*d)
            {
                y+=k;
            }
            else
                break;
        }
            //cout<<x<<" "<<y<<endl;
        if(x==y)
        {
            cout<<"Utkarsh\n";
        }
        else
            cout<<"Ashish\n";
    }
}

