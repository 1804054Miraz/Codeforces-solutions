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
int main()
{
    int n,i,a;
    cin>>n;
    int ar[8];
    reset(ar);
    for(i=1;i<=n;i++)
    {
        cin>>a;
        ar[a]++;
    }
   /* for(i=1;i<=7;i++)
    {
        cout<<ar[i]<<endl;
    }*/
    int gp1=0,gp2=2,gp3=0;
    ar[1]-=(ar[2]+ar[3]);
    if(ar[3])
       {
            ar[6]-=ar[3];
            gp3=ar[3];
            ar[3]-=gp3;
       }
       if(ar[2])
       {
           ar[2]-=(ar[4]+ar[6]);
            gp1=ar[4],gp2=ar[6];
            ar[4]-=gp1, ar[6]-=gp2;
       }


       if(ar[1]==0 && ar[2]==0 && ar[3]==0 && ar[4]==0 && ar[5]==0 && ar[6]==0 && ar[7]==0)
       {
           for(i=0;i<gp1;i++)
           {
               cout<<1<<" "<<2<<" "<<4<<endl;
           }
           for(i=0;i<gp2;i++)
           {
               cout<<1<<" "<<2<<" "<<6<<endl;
           }
           for(i=0;i<gp3;i++)
           {
               cout<<1<<" "<<3<<" "<<6<<endl;
           }
       }
       else
        cout<<-1<<endl;



}

