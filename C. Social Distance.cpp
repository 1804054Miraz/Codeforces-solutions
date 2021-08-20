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
    int t,n,k,i,p,cn,first,last,j;
    cin>>t;
   // cout<<-5/6<<endl;
    while(t--)
    {
        cin>>n>>k;
        string st;
        cin>>st;
        cn=p=0;
        for(i=0,j=n-1;i<n and (st[i]=='0' || st[j]=='0');)
        {
            if(st[i]=='0')
            {
                i++;
            }
            if(st[j]=='0')
            {
                j--;
            }
           // cout<<i<<" "<<j<<endl;
        }
        first=i;last=j;
      //  cout<<first<<" "<<last<<endl;
        if(first<=last)
        {
            if(first-1>=k)
            {
                cn++;
                 cn += (first-k-1)/(k+1);
            }

            //cout<<cn<<endl;

            for(i=first+1;first<last;i++)
            {
                if(st[i]=='1')
                {
                    cn += (i-first-1-k)/(k+1);
                    // cout<<cn<<endl;
                    first=i;
                }
                //cout<<first<<endl;
            }
            if(n-1-last-1>=k)
            {
                cn++;
                 cn += (n-1-last-1-k)/(k+1);
            }

        }
        else
        {
            if(n-2>=k)
            {
                cn += 2;
                cn += (n-2-k)/(k+1);
            }
            else
                cn++;

        }
      //  cout<<first<<" "<<last<<endl;
        cout<<cn<<endl;
    }
}

