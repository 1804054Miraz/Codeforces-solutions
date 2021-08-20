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
    int n,m,i,j,d,res=1000000000,first,second,sum=0,siz,diff;
    cin>>n>>m>>d;
    int ar[n][m];
    vector<int>vec;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ar[i][j];
            vec.pb(ar[i][j]);
        }
    }
    sort(vec.begin(),vec.end());
      /*  for(i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;*/
    siz=vec.size();
    int ans=0;
        if(siz==1)
        {
            res=0;
        }
    else if(siz%2==0)
    {
        first=siz/2-1;
        second=first+1;
       // cout<<first<<" "<<second<<endl;
        for(i=0;i<first;i++)
        {
            diff = vec[first]-vec[i];
            if(diff%d)
            {
                ans=1;
                break;
            }
            else
            {
                sum += diff/d;
            }
        }
        for(i=vec.size()-1;ans==0 and i>first;i--)
        {
            diff = vec[i]-vec[first];
            if(diff%d)
            {
                ans=1;
                break;
            }
            else
            {
                sum += diff/d;
            }
        }
        if(ans==0)
        res = min(res,sum);
       // cout<<res<<endl;
        ans=0;
        for(i=0;i<second;i++)
        {
            diff = vec[second]-vec[i];
            if(diff%d)
            {
                ans=2;
                break;
            }
            else
            {
                sum += diff/d;
            }
        }
        for(i=vec.size()-1;ans!=2 and i>second;i--)
        {
            diff = vec[i]-vec[second];
            if(diff%d)
            {
                ans=2;
                break;
            }
            else
            {
                sum += diff/d;
            }
        }
       // cout<<ans<<endl;
        if(ans==0)
         res = min(res,sum);
    }
    else
    {
        first=(siz+1)/2 -1;
       // cout<<first<<endl;
        for(i=0;i<first;i++)
        {
            diff = vec[first]-vec[i];
           // cout<<vec[first]<<" "<<vec[i]<<endl;
            if(diff%d)
            {
                ans=1;
                break;
            }
            else
            {
                sum += diff/d;
            }
        }
        //cout<<sum<<endl;
        for(i=vec.size()-1;ans==0 and i>first;i--)
        {
            diff = vec[i]-vec[first];
           //cout<<vec[first]<<" "<<vec[i]<<endl;
            if(diff%d)
            {
                ans=1;
                break;
            }
            else
            {
                sum += diff/d;
            }
        }
            if(ans==0)
        res=sum;
       // cout<<res<<endl;

    }
    if(res==1000000000)
    cout<<-1<<endl;
    else
        cout<<res<<endl;
    return 0;
}

