//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = acosl(-1);
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
#define digit3(x) floor((log3(x)))
vector<vector<int>>vec(inf);
//map<int,char>mark;
bool mark[inf];
ll ar[inf], mx=0,sum_leaf=0,cnt_leaf=0,approx_val,taken[inf][2],sum[inf][1];
void dfs(int i)
{

    if(vec[i].size()==0)
    {
        mark[i]=1;
        return ;
    }
    for(int j=0;j<vec[i].size();j++)
    {
        if(mark[vec[i][j]]==0)
        {
            dfs(vec[i][j]);
           // cout<<"tak "<<taken[i][1]<<"  sum "<<sum[i][0]<<endl;
             sum[i][0] += ar[vec[i][j]];
             taken[i][1]=max(taken[i][1],ar[vec[i][j]]);
            // cout<<i<<" "<<vec[i][j]<<"   "<<sum[i][0]<<" "<<taken[i][1]<<endl;
            //cout<<vec[i][j]<<" ";
        }
        if(vec[i].size()==j+1 and mark[i]==0)
        {
            approx_val=taken[i][1]*vec[i].size();
            sum[i][0]+=ar[i];
          // cout<<sum[i][0]<<" "<<approx_val<<" "<<vec[i].size()<<endl;
            if(approx_val>= sum[i][0])
            {
                ar[i]=taken[i][1];
            }
            else
            {
                ar[i]=(ceil)((double)sum[i][0]/vec[i].size());

            }
         //  cout<<i<<" "<<ar[i]<<endl;
            mark[i]=1;
            approx_val=0;
        }

    }

//cout<<i<<endl;

}
int main()
{
    int n,i,j,p;
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        scanf("%d",&p);
        vec[p].pb(i);
    }
    for(i=1;i<=n;i++)
    {
       // scanf("%I64",ar[i]);
       cin>>ar[i];
        taken[i][0]=ar[i];
        taken[i][1]=0;
    }
    for(i=1;i<=n;i++){
        if(mark[i]==0)
        {
            //cout<<i<<endl;
           dfs(i);
          // cout<<endl;
        }
    }
    cout<<ar[1]<<endl;
   // printf("%I64\n",ar[1]);
   /* for(i=1;i<=n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;*/
}
/*
7
1 1 1 4 4 5
3 4 4 2 5 3 6
*/
