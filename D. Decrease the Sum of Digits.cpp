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
    ll n,s,test,sum,sz,m,i;
   // int i;
    cin>>test;
    while(test--)
    {
        cin>>n>>s;
         stringstream s1;
        string  st = to_string(n);
         sz = st.size();
         sum = 0;
           // cout<<"sz = "<<sz<<endl;
        for(i=0;i<sz;i++)
        {
            sum += (st[i]-'0');

        }
    //    cout<<"sum = "<<sum<<endl;
        if(sum>s)
        {
           // cout<<st<<endl;
            sum = 0;
        for(i=0;i<sz;i++)
        {
            sum += (st[i]-'0');
           if(sum>=s)
           {
               sum -= (st[i]-'0');
               break;
           }

        }
       // cout<<"i = "<<i<<" sum = "<<sum<<endl;


            if(sz==18 and (st[0]-'0')>= s)
            {
                cout<<1e20-n<<endl;
            }
            else if(i==0 ||(i==1 and st[0]=='9'))
            {
            string s2(sz+1,'0');
            s2[0]='1';
            s1<<s2;
            s1>>m;
           // cout<<s2<<"  "<<m<<"  "<<n<<endl;
           cout<<m-n<<endl;
            }

            else{
                    cout<<st[0]<<endl;
                    if(st[i-1]=='9')
                    {
                        st[i-2]++;
                        i--;
                    }
                    else
                    {
                        st[i-1]++;
                    }

                for(;i<sz;i++)
                {
                    st[i]='0';
                }
            s1<<st;
            s1>>m;

          //  cout<<st<<"  "<<m<<"  "<<n<<endl;
           cout<<m-n<<endl;
            }
        }
        else
        {
            cout<<0<<endl;
        }



    }
   // n = 100000000000000001+899999999999999999;

   // cout<<sum<<endl;
}

