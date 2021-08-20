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
 string a,b;
 vector<int>vec;
int cal(int n,int len)
{

    if(a.size()<=0)
    {
        return 0;
    }

        if(a[0] == b[n-len]){
                if(a[0]=='0')
                    a[0]='1';
                else
                    a[0]='0';
           // cout<<a[0]<<endl;
             vec.pb(1);
        }
       // cout<<a<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[i] != b[n-i-1])
            {
                len++;
            }
            else
                break;
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]=='0')
                a[i]='1';
            else
                a[i]='0';
        }

       // cout<<len<<" "<<a<<endl;
        vec.pb(n);
        a.erase(n-len+1,n);
        cal(a.size(),1);
        return 0;
}
int main()
{
    int t,len,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }

        cal(n,1);
        cout<<vec.size()<<" ";
        for(int i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";
        cout<<endl;
        vec.clear();
    }
}

