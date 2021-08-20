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
const int inf=1e9;
const int mxN=2e5+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
ll ar[100001];
int main()
{
      speed;
        ll test,n,i,p;

            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>ar[i];

            }
            sort(ar,ar+n);

            double root=n-1,result,j,mn;
            result = pow(ar[n-1],1.0/root);
                p = result;
                mn = n-1;
              //  cout<<"p = "<<p<<endl;
              p = abs(ar[n-1]- pow(p,mn))<abs(ar[n-1]-pow(p+1,mn))?p:p+1;
            //  cout<<"p = "<<p<<endl;
              p = abs(ar[n-1]-pow(p-1,mn))<abs(ar[n-1]-pow(p,mn))?p-1:p;
          //  cout<<"p = "<<p<<endl;
                ll sum = 0;
            for(j=0,i=0;i<n;j++,i++)
            {
               sum += abs(ar[i]- pow(p,j));
            }
            cout<<sum<<endl;


}

