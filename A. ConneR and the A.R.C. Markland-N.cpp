///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;
map<ll,ll>marks;
int main(){
	speed;
	ll t,n,s,k,i,r,l;
	cin>>t;
	while(t--){
		cin>>n>>s>>k;
		marks.clear();
		
		ll ar[k];
		for(i=0;i<k;i++){
			cin>>ar[i];
			marks[ar[i]]=1;
		}
		if(marks[s]==0){
			cout<<0<<endl;
		}
		else {
			
			r = s;
			l = s;
			while(marks[r]==1 and r<n){
				r++;
				//cout<<r<<endl;
			}
			while(marks[l]==1 and l!=0){
				l--;
			}
			if(l==0){
				cout<<r-s<<endl;
			}
			else if(r>=n){
				cout<<s-l<<endl;
			}
			else
			cout<<min(r-s,s-l)<<endl;	
		}
	}
		
	return 0;
}

