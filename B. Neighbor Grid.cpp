//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
///A lot of mistakes is happened without understanding questions clearly.\
Please,make sure that understand question clearly.Think from every possible output.\
Make different algorithm to answer the question.Don't think that you have tried all possible ways.\
There is always simple and tricky way to solve the brute force type question.
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
    3. divide zero

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e5+7;
const int mxN=3000000;
const int mod=1e9+7;
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
#define DEBUG 0
//cout<<"Case "<<cas<<": "<<
int main()
{
    speed;
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int ar[n][m];
        bool ans=true;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        if(ar[0][0]<=2 and ar[0][m-1]<=2 and ar[n-1][0]<=2 and ar[n-1][m-1]<=2)
        {
           ar[0][0]= ar[0][m-1]=ar[n-1][0]=ar[n-1][m-1]=2;
        }
        else
            ans=false;

        if(ans==false)
        {
            cout<<"NO\n";
            continue;
        }


        for(i=0;ans and i<n;i++)
        {
            for(j=0;ans and j<m;j++)
            {
                if(i==0 and j>=1 and j<=m-2)
                {
                    if(ar[i][j]>3)
                    {
                         cout<<"NO\n";
                        ans=false;
                        break;
                    }
                    ar[i][j]=3;
                }
                if(i==n-1 and j>=1 and j<=m-2)
                {
                    if(ar[i][j]>3)
                    {
                         cout<<"NO\n";
                        ans=false;
                        break;
                    }
                    ar[i][j]=3;
                }
                if(j==0 and i>=1 and i<=n-2)
                {
                    if(ar[i][j]>3)
                    {
                         cout<<"NO\n";
                        ans=false;
                        break;
                    }
                    ar[i][j]=3;
                }
                if(j==m-1 and i>=1 and i<=n-2)
                {
                    if(ar[i][j]>3)
                    {
                         cout<<"NO\n";
                        ans=false;
                        break;
                    }
                    ar[i][j]=3;
                }
                if(i!=0 and j!=0 and i!=n-1 and j!=m-1)
                {
                    if(ar[i][j]>4)
                    {
                         cout<<"NO\n";
                        ans=false;
                        break;
                    }
                    ar[i][j]=4;
                }
                //else
                   // ar[i][j]=4;


            }

        }
        if(ans){
                cout<<"YES\n";
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                 cout<<ar[i][j]<<" ";
            }
             cout<<endl;
        }
        }

    }
}

