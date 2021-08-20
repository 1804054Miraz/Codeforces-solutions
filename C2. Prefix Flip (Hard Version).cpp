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
int main()
{
    int t,n,i,len,side,cnt,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        side=1,cnt=0,len=0;
        reverse(b.begin(),b.end());
        vector<int>prefix;
        for(l=0,r=n-1,i=0;l<=r;)
        {
           // cout<<len<<endl;
            if(side==1)
            {
              // cout<<"sd1 = "<<side<<" "<<len<<" "<<cnt<<" "<<i<<" "<<l<<" "<<r<<endl;
             // cout<<l<<" "<<i<<" "<<a[l]<<" "<<b[i]<<endl;
                if(cnt%2)
                {

                    if(a[l]=='0')
                            a[l]='1';
                        else
                            a[l]='0';

                    if(a[l]!=b[i])
                    {
                        prefix.pb(n-len);
                        while(i<n and a[l]!=b[i])
                        {
                            i++, l++, len++;
                            char ch=a[l];
                            if(ch=='0')
                                ch='1';
                            else
                                ch='0';
                            if(i>=n || ch==b[i])
                                break;
                                a[l]=ch;
                        }
                        side=2, cnt++;
                    }
                    else
                    {
                        prefix.pb(1);
                        if(a[l]=='0')
                            a[l]='1';
                        else
                            a[l]='0';

                        prefix.pb(n-len);
                        while(i<n and a[l]!=b[i])
                        {
                            i++, l++, len++;
                            char ch=a[l];
                            if(ch=='0')
                                ch='1';
                            else
                                ch='0';
                            if(i>=n || ch==b[i])
                                break;
                                a[l]=ch;
                        }
                        cnt++;
                        side=2;
                    }

                }
                else
                {
                    if(a[l]!=b[i])
                    {

                        prefix.pb(n-len);
                        while(i<n and a[l]!=b[i])
                        {
                            i++, l++, len++;
                        }
                        side=2, cnt++;
                    }
                    else
                    {
                      //  cout<<len<<endl;
                        prefix.pb(1);
                        if(a[l]=='0')
                            a[l]='1';
                        else
                            a[l]='0';

                        prefix.pb(n-len);
                        while(i<n and a[l]!=b[i])
                        {
                            i++, l++, len++;
                        }
                        cnt++;
                        side=2;
                    }
                }
            }
            else
            {
               // cout<<"sd2 = "<<side<<" "<<len<<" "<<cnt<<" "<<i<<" "<<r<<" "<<l<<endl;
                if(cnt%2)
                {
                    //cout<<len<<endl;
                 //   cout<<r<<" "<<i<<" "<<a[r]<<" "<<b[i]<<endl;
                    if(a[r]=='0')
                            a[r]='1';
                        else
                            a[r]='0';
                   // cout<<r<<" "<<i<<" "<<a[r]<<" "<<b[i]<<endl;
                    if(a[r]!=b[i])
                    {
                        prefix.pb(n-len);
                        while(i<n and a[r]!=b[i])
                        {
                            r--, i++, len++;
                            char ch=a[r];
                            if(ch=='0')
                                ch='1';
                            else
                                ch='0';
                           // break;
                           // cout<<a[r]<<" "<<b[i]<<endl;
                            if(i>=n || ch==b[i])
                                break;
                                a[r]=ch;

                        }
                        cnt++, side=1;
                    }
                    else
                    {
                       // cout<<r<<" "<<i<<endl;
                        if(a[r]=='0')
                            a[r]='1';
                        else
                            a[r]='0';

                        prefix.pb(1);
                        prefix.pb(n-len);
                        while(i<n and a[r]!=b[i])
                        {
                            r--, i++, len++;
                            char ch=a[r];
                            if(ch=='0')
                                ch='1';
                            else
                                ch='0';
                            if(i>=n ||ch==b[i])
                                break;
                                a[r]=ch;
                        }
                        cnt++, side=1;
                    }

                }
                else
                {
                   // cout<<r<<" "<<i<<endl;
                //   cout<<r<<" "<<i<<" "<<a[r]<<" "<<b[i]<<endl;
                    if(a[r]!=b[i])
                    {
                        prefix.pb(n-len);
                        while(i<n and a[r]!=b[i])
                        {
                            r--, i++, len++;
                        }
                        cnt++, side=1;
                    }
                    else
                    {
                        if(a[r]=='0')
                            a[r]='1';
                        else
                            a[r]='0';
                        prefix.pb(1);
                        prefix.pb(n-len);
                        while(i<n and a[r]!=b[i])
                        {
                            r--, i++, len++;
                        }
                        cnt++, side=1;
                    }

                }
            }
           // printf("side=%d, l=%d, r=%d, i=%d, len=%d, cnt=%d\n",side,l,r,i,len,cnt);
        }

        cout<<prefix.size()<<" ";
        for(i=0;i<prefix.size();i++)
            cout<<prefix[i]<<" ";
        cout<<endl;
        prefix.clear();
    }
}

