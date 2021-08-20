//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = acosl(-1);
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
#define digit3(x) floor((log3(x)))
bool prime[8001];
void create_prime()
{
    int i,j;
    for(i=2;i<=8000;i+=2)
    {
        prime[i]=1;
    }
    for(i=3;i*i<8000;i+=2)
    {
        if(!prime[i])
        {
            for(j=i*i;j<=8000;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    prime[2]=0;
}
int main()
{
    create_prime();
    int i,test,j,n,p,s,q;
    cin>>test;
    while(test--)
    {
        cin>>n;
        if(prime[n]==0)
        {
            for(i=1;i<=n;i++)
            {
                j=n;
                while(j--)
                {
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            i=n;
            if(n%2==0)
            {
                i=n+1;
            }
            for(; ;i+=2)
            {
                if(prime[i]==0 and prime[i-(n-1)])
                {
                    p=i-(n-1);
                    break;
                }
            }
            q=(p*(n-1))+p;
            s=p;
            if(prime[q])
            {
                i=q-p;
               // cout<<i<<endl;
                if(prime[i+1])
                {

                    if(i%2==0)
                    {
                       i++;
                    }
                  for(; ;i+=2)
                    {
                    if(prime[i]==0 and prime[i-(q-p)])
                    {
                        s=i-(q-p);
                      //  cout<<s<<endl;
                        break;
                    }
                    }
                }
                else
                {
                    s=1;
                }
            }
            for(i=1;i<n;i++)
            {
                j=n-1;
                while(j--)
                {
                    cout<<1<<" ";
                }
                cout<<p<<" "<<endl;
            }
            for(i=1;i<=1;i++)
            {
                j=n-1;
                while(j--)
                {
                    cout<<p<<" ";
                }
                cout<<s<<endl;
            }
        }
    }
}

