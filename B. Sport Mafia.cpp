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

int main(){
	speed;
	int n,k,i,j,cn=0;
	cin>>n>>k;
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	ll candy=0;
	for(i=1;i<=n;i++){
		candy +=i;
		if(candy-(n-i)==k){
			//cout<<candy<<endl;
			break;
		}
			
		
	}
	candy -=k;
	cout<<candy<<endl;
	return 0;
}

