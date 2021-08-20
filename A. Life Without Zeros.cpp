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
    int a,b,c,d;
    cin>>a>>b;
    c = a+b;
    string s1,s2,s3;
    s1=to_string(a);
    s2=to_string(b);
    s3=to_string(c);
    while(s1.find('0')!=-1)
    {
        int pos=s1.find('0');
        //cout<<pos<<endl;
        s1.erase(pos,1);
    }
    while(s2.find('0')!=-1)
    {
        int pos=s2.find('0');
        s2.erase(pos,1);
    }
    while(s3.find('0')!=-1)
    {
        int pos=s3.find('0');
        s3.erase(pos,1);
    }
   // cout<<s1<<" "<<s2<<" "<<s3<<endl;
    stringstream s4,s5,s6;
    s4<<s1;
    s4>>a;
    s5<<s2;
    s5>>b;

    s6<<s3;
    s6>>d;
   // cout<<c<<" "<<a<<" "<<b<<" "<<a+b<<" "<<d<<endl;
    if(a+b==d)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

}

