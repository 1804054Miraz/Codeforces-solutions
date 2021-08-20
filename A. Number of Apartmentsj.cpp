//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+7;
const int mxN=2e5+5;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)      	cout << #x << "=" << x << endl
#define debug2(x, y)  	cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit(x) floor((log10(x))+1)
map<int,int>mp;
int vec[8];
void cnt()
{
    for(int i=1;i<=1000;i++)
    {
      if(i%3==0)
      {
          mp[i]=3;
      }
      else if(i%5==0)
      {
          mp[i]=5;
      }
      else if(i%7==0)
      {
          mp[i]=7;
      }
    }
}
int main()
{
    cnt();
    int test,n,i;
    cin>>test;
    while(test--)
    {
        cin>>n;
        bool ans;
        //cout<<mp[n]<<endl;
        reset(vec);
        if(mp[n]!=0)
        {
           vec[mp[n]]=n/mp[n];
           ans = true;
        }
        else
        {
            if(mp[n-3]!=0)
            {
                vec[3]=1;
                n -= 3;
                vec[mp[n]]=n/mp[n];
                ans = true;
            }
            else if(mp[n-5]!=0)
            {
                vec[5]=1;
                n -= 5;
                vec[mp[n]]=n/mp[n];
                ans = true;
            }
            else if(mp[n-7]!=0)
            {
                vec[7]=1;
                n -= 7;
                vec[mp[n]]=n/mp[n];
                ans = true;
            }
            else
                ans = false;
        }
        if(ans){
        for(i=0;i<8;i++)
        {
           if(i==3 || i==5 || i==7)
            cout<<vec[i]<<" ";
        }
        }
        else
            cout<<-1;
        cout<<endl;

    }
}

