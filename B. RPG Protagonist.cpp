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
    int t;
    cin>>t;
    while(t--)
    {
        int p_unit,f_unit,cntw,cnts,s_unit,w_unit,num_s,temp_num_s,num_w,temp_num_w,ans=0;
        cin>>p_unit>>f_unit>>cnts>>cntw>>s_unit>>w_unit;
        //let s<w
        if(s_unit>w_unit)
        {
            swap(s_unit,w_unit);
            swap(cnts,cntw);
        }
        //since s<w
        for(num_s = 0; num_s<=cnts and num_s*s_unit<=p_unit; num_s++)
        {
            //suppose we already taken num_s*s_unit sword from person.Then we take war axes from remaining p_unit which not more than cntw.
            num_w = min((p_unit-num_s*s_unit)/w_unit,cntw);
            //Take sword from f_unit which not more than the remaining sword(cnts-num_s)
            temp_num_s = min(f_unit/s_unit, cnts-num_s);
            //We already taken sword from f_unit, so now we take war_axes from remaining f_unit which not more than cntw-num_w(since we taken war_axes)
            temp_num_w = min((f_unit-temp_num_s*s_unit)/w_unit,cntw-num_w);
            ans = max(ans,num_s+temp_num_s+num_w+temp_num_w);

        }
        cout<<ans<<endl;
    }
}

