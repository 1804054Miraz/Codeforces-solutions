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
    int n,i,t,j,l,r,mn,fst,lst;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        fst = l, lst = r;
        int nr[n+1],lr[n+1],rr[n+1],left[l+1],right[r+1];
        reset(lr), reset(rr);
        bool mark[n+1];
        reset(mark);
        for(i=1;i<=n;i++)
        {
            cin>>nr[i];
            if(i<=l){
                lr[nr[i]]++;
               // left[nr[i]]++;
            }
            else{
                rr[nr[i]]++;
               // right[nr[i]]++;
            }
        }
        mn=0;
        //remove matching pair
        for(i=1;i<=n;i++)
        {
            mn = min(lr[nr[i]],rr[nr[i]]);
            lr[nr[i]]-=mn;
            rr[nr[i]]-=mn;
            l -= mn;
            r -= mn;
        }
        if(l==r)
        {
            cout<<l<<endl;
        }
        else if(l>r)
        {
            int res=0;
            //cout<<"check duplicate elements and remove pair of them\n";
            //cout<<res<<" "<<l<<" "<<r<<endl;
            for(i=1;l>r and i<=fst;i++)
            {
                if(mark[nr[i]]==0){
                    mn = min(l-r,lr[nr[i]]/2 *2);
                    res += mn/2;
                    //lr[nr[i]]-= mn;
                    l-= mn;
                    mark[nr[i]]=1;
                }
            }
            //cout<<res<<" "<<l<<" "<<r<<endl;
            if(l==r)
            cout<<l+res<<endl;
            else
                cout<<(l-r) + r + res<<endl;
        }
        else
        {
            int res=0;
           // cout<<"check duplicate elements and remove pair of them\n";
            for(i=fst+1;r>l and i<=n;i++)
            {
                if(mark[nr[i]]==0){
                    mn = min(r-l,rr[nr[i]]/2*2);
                    res += mn/2;
                    //rr[nr[i]]-= 2*mn;
                    r-= mn;
                     mark[nr[i]]=1;
                }

            }
            if(l==r)
            cout<<r+res<<endl;
            else
                cout<<(r-l) + l + res<<endl;
        }
    }

    return 0;
}
