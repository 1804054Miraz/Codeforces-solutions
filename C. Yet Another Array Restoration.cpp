///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
typedef long long ll;
typedef unsigned long long int ull;
typedef long double ld;
const ld PI = acosl(-1);
const int inf=1e9+7;
const int mxN=2e5+5;
#define SIZE 26
#define FORBIDDEN -1
#define NOT_VISITED 0
#define VISITED 1
int main()
{
    speed;
    int test,n,x,y,c,i;
    cin>>test;
    while(test--)
    {
        cin>>n>>x>>y;
        vector<int>vec;
        //n--;
        if((y-x)%(n-1)==0)
        {
            c = (y-x)/(n-1);
            n--;
            while(n--){
            vec.pb(y);
            y -= c;
            }
            vec.pb(x);
        }
        else
        {
            int m=y;
            c = y-x;
            i = n-1;
            for(;i>=1;i--)
            {
                if(c%i==0)
                {
                     c = c/i;
                    break;
                }
            }

            //cout<<"c = "<<c<<endl;
            while(n-- and y>0)
            {
               // cout<<y<<" ";
                vec.pb(y);
                y -= c;
            }
           // cout<<"n = "<<n<<" y = "<<y<<endl;
            if(y<=0)
            {
                m += c;
                n++;
            while(n-- and n>=0)
            {
                vec.pb(m);
                m += c;
            }
            }

        }

       for(int j=0;j<int(vec.size());j++)
       {
           cout<<vec[j]<<" ";
       }
       cout<<endl;
    }
}

