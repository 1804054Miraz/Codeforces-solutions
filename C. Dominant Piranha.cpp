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
#define debug1(x)  cout << #x << "=" << x << endl
#define debug2(x, y)  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit3(x) floor((log3(x)))

int main()
{

    ll i,j,cn,test,n,mx,ind,mx_ind;
    cin>>test;
    while(test--)
    {
        cin>>n;
        ll ar[n+1];
        mx=0;
        bool ans=false;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
            if( i>1 and (ar[i-1]-ar[i]!=0))
            {
                ans = true;
            }
            if(ar[i]>mx){
            mx_ind = i;
            mx=ar[i];
        }
        }
      //  cout<<mx_ind<<" "<<ar[mx_ind]<<endl;
        if(ans)
        {
           for(i=2;i<=n;i++)
           {
               if(ar[i]==mx and ar[i-1]!=mx)
               {
                   ind = i;
                   break;
               }
               else
               {
                   if(ar[i]!=mx and ar[i-1]==mx)
                   {
                       ind = i-1;
                       break;
                   }
               }
           }
           cout<<ind<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}

