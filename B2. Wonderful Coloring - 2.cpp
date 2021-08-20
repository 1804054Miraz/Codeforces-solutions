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
const int mod=998244353;
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
   // speed;
    int t,n,i,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        priority_queue<pair<int,int>>val_ind;
        map<int,int>cnt,color;
        int sum=0;
        int ar[n],ans[n];

        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            cnt[ar[i]]++;
            if(cnt[ar[i]]<=k)
            {
                sum++;
                val_ind.push({ar[i],i});
            }

        }
        int ind,val,num=n/k,col_num=0;
        reset(ans);
        sum = sum/k * k;
        while(!val_ind.empty() and sum>0)
        {
            val = val_ind.top().first;
            ind = val_ind.top().second;
            val_ind.pop();

            ans[ind]=(col_num%k)+1;
            col_num++;
            sum--;
        }
        for(i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;

    }
}

