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
vector<int>team[48+2];
bool check[48+2];
vector<int>one,two,third,temp;
int x,y;
bool ans=true;
void dfs(int p)//p means player
{
    if(y>=3)
    {
        ans=false;
        return ;
    }
    y++;
    check[p]=1;
    temp.pb(p);
      for(int i=0;i<team[p].size();i++)
        {
            int u=team[p][i];
            if(check[u]==0)
            {
                dfs(u);
            }
        }


}
int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        team[a].pb(b);
        team[b].pb(a);
    }
    for(i=1;i<=n;i++)
    {
        if(team[i].size()==0)
        {
           one.pb(i);
            check[i]=1;
        }
        else if(check[i]==0)
        {
            dfs(i);
            check[i]=1;
            if(y==2)
            {
                for(j=0;j<temp.size();j++)
                {
                    two.pb(temp[j]);
                }
            }
            else if(y==3)
            {
                for(j=0;j<temp.size();j++)
                {
                    third.pb(temp[j]);
                }
            }
            else
                break;
                y=0,x++;
        }
        temp.clear();

    }
    if(ans)
    {
      //  cout<<one.size()<<" "<<two.size()<<" "<<third.size()<<endl;
       if(two.size()/2 > one.size())
        {
            cout<<-1<<endl;
            return 0;
        }
        for(i=0;i<third.size();i+=3)
        {
            cout<<third[i]<<" "<<third[i+1]<<" "<<third[i+2]<<endl;
        }
            i=0;

                for(j=0;j<(two.size());j+=2)
                {
                   // cout<<"he0r\n";
                    cout<<two[j]<<" "<<two[j+1]<<" ";
                    for(;i<one.size();)
                    {
                        cout<<one[i++]<<endl;
                        break;
                    }
                }
                for(;i<one.size();i+=3)
                {
                    cout<<one[i]<<" "<<one[i+1]<<" "<<one[i+2]<<endl;
                }
    }
    else
        cout<<-1<<endl;

}

