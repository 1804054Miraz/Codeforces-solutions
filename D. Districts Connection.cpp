//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+10;
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
     ll i,j,cn,test,n,mx,ind,mx_ind,mn_ind,mn;
    cin>>test;
    while(test--)
    {
        cin>>n;
        ll ar[n+1];
        mx=0;mn=inf;

        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
            if(ar[i]>mx){
            mx_ind = i;
            mx=ar[i];
            }
            if(ar[i]<mn)
            {
                mn_ind=i;
                mn=ar[i];
            }
        }
        //cout<<mn<<" "<<mx<<endl;
        if(mx==mn)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            vector<int>vec;
            bool mark[n+1];
            reset(mark);
            for(i=1;i<=n;i++)
            {
                if((mark[i]==0 and mx_ind!=i) and ar[i]!=ar[mx_ind])
                {
                    vec.pb(i);
                    vec.pb(mx_ind);
                    mark[i]=1;
                    mark[mx_ind]=1;
                }
            }
            for(i=1;i<=n;i++)
            {
               if((mark[i]==0 and mn_ind!=i) and ar[i]!=ar[mn_ind])
                {
                    vec.pb(i);
                    vec.pb(mn_ind);
                    mark[i]=1;
                    mark[mn_ind]=1;
                }
            }
            ll sz=vec.size();
            for(i=0;i<sz;i+=2)
            {
                cout<<vec[i]<<" "<<vec[i+1]<<endl;
            }
            vec.clear();
        }
    }
}

