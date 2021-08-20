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
    int t,i,n,pos;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        n = st.size();
        for(i=0;i<n;i++)
            {
                if(st[i]=='a')
                {
                    pos=i;
                }

            }
       // int ps[26];
        map<char,char>sign;
        map<char,int>ps;
       // reset(ps);
        ps['a']=pos, sign['a']='A';
        for(char ch='b';ch<='z';ch++)
        {
            for(i=0;i<n;i++)
            {

                if(ch==st[i])
                {
                    ps[ch]=i;
                    if(pos<i)
                    {
                        sign[ch]='R';
                    }
                    else
                        sign[ch]='L';
                    //cout<<ch<<" "<<sign[ch]<<endl;
                    break;
                }
            }
        }
        //cout<<sign['c']<<" "<<sign['b']<<endl;
        bool ans=true;
        char root='a';
        sort(st.begin(),st.end());
        i=0;
        sign['a']=sign['b'];
        for(char ch='a';i<n;i++,ch++)
            {

                if(st[i]==ch)
                {
                   // cout<<ch<<" "<<root<<endl;
                    if(st[i]!='a')
                    {
                        if(sign[root]==sign[st[i]])
                        {
                          // int diff = abs((ch-'a')-(root-'a'));
                          // cout<<diff<<endl;
                           if(abs(ps[ch]-ps[root])!=1)
                           {
                               ans=false;
                           }

                        }
                        else
                        {
                           // int diff = ;
                           // cout<<diff<<endl;
                            if(abs(ps[ch]-ps[root])!=abs((ch-'a')-(root-'a'))+ (ch-'a')-1)
                            {
                                ans=false;
                            }
                        }
                    }
                }
                else
                    ans=false;
                root=ch;
            }
            if(ans)
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";



    }
}

