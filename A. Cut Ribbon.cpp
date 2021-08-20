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
const int inf=-2e7+7;
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
int ar[3];
int dp[3][4001];
int solution(int pos,int length)
{
    //cout<<pos<<" "<<length<<endl;
    if(pos==3)
        return inf;
    if(length==0)
        return 0;
     if(dp[pos][length]!=-1)
        return dp[pos][length];

        int a=inf,b=inf;
    if(length>=ar[pos])
    {
        a = 1+solution(pos,length-ar[pos]);
    }
   // else
   cout<<"len = "<<length<<endl;
        b = solution(pos+1,length);
        cout<<"pos = "<<pos<<endl;
     cout<<a<<" "<<b<<endl;
     dp[pos][length]=max(a,b);
     cout<<dp[pos][length]<<endl;
     return dp[pos][length];
}
int main()
{
    int n,i;
    cin>>n>>ar[0]>>ar[1]>>ar[2];
    memset(dp,-1,sizeof dp);
    sort(ar,ar+3);
    cout<<solution(0,n);

    return 0;
}
