
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
const int mxN=2e5+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
int ar[10002],cnt;
vector<array<int,3>>res;
void calc(int i,int j,int x)
{
    ar[i] -= x*i;
    ar[j] += x*i;
    res.pb({i,j,x});
    cnt++;
   // cout<<i<<" "<<j<<" "<<x<<endl;
     /*for(i=1;i<=n;i++)
            cout<<ar[i]<<" ";
        cout<<endl;*/

}
int main()
{
    speed;
    int test,i,j,n,x,sum,p;
    cin>>test;
    while(test--)
    {
        cin>>n;
        res.clear();
        cnt=0;
        for(i=0;i<=n;i++)
        {
            ar[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        sum = accumulate(ar+1,ar+n+1,0);
       // cout<<"sum = "<<sum<<endl;
        if(sum%n){
            cout<<-1<<endl;
        continue;
        }

        p=sum/n;
       // cout<<"p="<<p<<endl;
        for(i=2;i<=n;i++)
        {
           if(ar[i]%i==0)
           {
               calc(i,1,ar[i]/i);
           }
           else
           {
                x = ar[i]/i + 1;
                x = x*i-ar[i];
                calc(1,i,x);
                //cnt--;
                calc(i,1,ar[i]/i);
           }
        }
        for(i=2;i<=n;i++)
        {
            calc(1,i,p);
        }
       /* for(i=1;i<=n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;*/
        cout<<cnt<<endl;
        for(auto &[i,j,x] : res)
        {
            cout<<i<<" "<<j<<" "<<x<<endl;
        }

    }
}
