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
	//speed;
	int test,exp,inte,str;
	cin>>test;
	while(test--){
		cin>>str>>inte>>exp;
		ll num = str+exp;
		if(num<=inte){
			cout<<0<<endl;
		}
		else {
			num = max(0,min((str+exp-inte+1)/2,exp+1));
			cout<<num<<endl;
		}
	}
	return 0;
}

