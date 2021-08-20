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
int ar[101][101];
int main()
{
    int n,m,t,i,a,j;
    sc(t);
    while(t--)
    {
       scanf("%d%d",&n,&m);
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               sc(ar[i][j]);
           }
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if((i+j)%2==0 && (ar[i][j])%2==1)
               {
                  ar[i][j]++;
                  // printf("11 %d ",ar[i][j]);
               }
               else if((i+j)%2 && (ar[i][j])%2==0)
               {
                    ar[i][j]++;
                   // printf("22 %d ",ar[i][j]);
               }
           }
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               printf("%d ",ar[i][j]);
           }
           printf("\n");
       }
       //cout<<endl;
    }
}

