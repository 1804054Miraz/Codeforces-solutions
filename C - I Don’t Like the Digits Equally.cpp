//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
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
bool digit[13];
vector<int>vec,res;
int main()
{
    speed;
    reset(digit);
    vec.clear(),res.clear();
    int test,n,a,p,k,i,q,mn,sz,j;
        cin>>n>>k;
        string st=to_string(n);
        for(i=0;i<k;i++)
        {
            cin>>a;
            digit[a]=true;
        }
        for(i=0;i<10;i++)
        {
            if(digit[i]==false)
            {
              vec.pb(i);
            }

        }
        sz=st.size();
       // cout<<st.size()<<endl;
       for(j=0;j<sz;j++){

            for(i=st[j]-'0';i<10;i++)
            {
                if(digit[i]==false)
                {
                    res.pb(i);
                    break;

                }
            }
        }
        //cout<<res.size()<<endl;
        int siz=res.size();
        for(i=0;i<siz;i++)
        {
            cout<<res[i];
        }
        cout<<endl;

}

