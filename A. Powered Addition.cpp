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
    int n,i,t,mx,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+1],powr[32],sum[32],mx_arry[n+1];
        mx= -1000000005;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
            mx = max(mx,ar[i]);
            mx_arry[i]=mx;
        }

        //mx=mx-ar[n];
       // cout<<mx<<endl;
        mx-=ar[n];
        for(i=1;i<=31;i++)
        {
            powr[i]= (1<<(i-1));
           // cout<<powr[i]<<" ";
        }
       // cout<<endl;
        powr[0]=0;
        partial_sum(powr,powr+32,sum);

         mx = -1000000005;
        for(i=1;i<n;i++)
        {
            if(ar[i]>ar[i+1]){
            for(j=1;j<=31;j++){

                if((ar[i]-ar[i+1])<=sum[j])
                {
                    mx = max(mx,j);
                    ar[i+1]=ar[i];
                    break;
                }
            }
            }
            //cout<<mx_arry[i]<<" ";
        }
        if(mx==(-1000000005))
            mx=0;
        cout<<mx<<endl;
        //cout<<endl;
    }
}

