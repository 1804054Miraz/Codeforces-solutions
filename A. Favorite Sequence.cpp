//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
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
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
//cout<<"Case "<<cas<<": "<<
int main()
{
    int t,n,i,j,k,mid;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        k=1;
        if(n%2){
                mid=n/2 +1;
        for(i=0,j=n-1;i<mid;)
        {
            if(k%2)
            {
               cout<<ar[i]<<" ";
               k=2;i++;
            }
            else
            {
                cout<<ar[j]<<" ";
                k=1;
                j--;
            }
           // cout<<i<<" "<<j<<endl;
        }
        cout<<endl;
        //cout<<mid<<endl;
    }
    else
    {
        mid=n/2;
       for(i=0,j=n-1;j>=mid;)
        {
            if(k%2)
            {
               cout<<ar[i]<<" ";
               k=2;i++;
            }
            else
            {
                cout<<ar[j]<<" ";
                k=1;
                j--;
            }
           // cout<<i<<" "<<j<<endl;
        }
        cout<<endl;
    }
    }
}

