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
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
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
bool mark[105];
int main()
{
   // speed;
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ar[n],temp[n];
        bool mark[104];
        reset(mark);
        reset(temp);
        reset(ar);
        set<int>ary;
        for(i=0;i<n;i++){
                cin>>ar[i];
            ary.insert(ar[i]);

        }
        int cn=0,res=1;
        if(k==1)
        {
            if(ary.size()==1)
            cout<<1<<endl;
            else
                cout<<-1<<endl;

        }
        else
        {
            //cout<<"h\n";
            for(i=0;i<n;i++)
            {
                if(mark[ar[i]]==0)
                {
                    cn++;
                    mark[ar[i]]=1;
                }
                if(cn>k)
                {
                   // cout<<ar[i]<<" ";
                    res++;
                    for(j=i;j<n;j++)
                    {
                        temp[j]=ar[j]-ar[i-1];
                    }
                    reset(ar);
                    reset(mark);
                   // reset(temp);
                    for(j=0;j<n;j++)
                    {
                        ar[j]=temp[j];
                        //cout<<ar[j]<<" ";
                    }
                  //  cout<<endl;
                    cn=0;i=0;
                    reset(temp);
                }
            }
             cout<<res<<endl;
        }

    }
}

