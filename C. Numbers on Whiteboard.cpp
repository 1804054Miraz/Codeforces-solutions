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
vector<int>vec;
int main()
{
    int n,test,k,i,j;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int ar[n+1];
        for(i=1;i<=n;i++)
        {
            ar[i]=i;
        }
       // sort(ar,ar+n+1);
      // for(i=1;i<=n;i++) cout<<ar[i]<<" ";cout<<endl;
        for(i=n,j=n-1;i>1;j--,i--)
        {
            vec.pb(ar[i]);
            vec.pb(ar[j]);
            ar[j]=ceil(double(ar[i]+ar[j])/2);
            //cout<<ar[j]<<" ";
        }
        cout<<ar[1]<<endl;
        for(i=0;i<vec.size();i+=2)
        {
            cout<<vec[i]<<" "<<vec[i+1]<<endl;
        }
        vec.clear();
    }
}

