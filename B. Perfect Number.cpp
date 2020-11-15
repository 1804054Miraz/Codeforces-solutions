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
	int k,i,j;
	cin>>k;
	for(i=19,j=0;;i+=9){
		 string s = to_string(i);
		  list<char>st(s.begin(),s.end());
		  int sum = 0;
		  for(auto x : st)
			  sum +=x-48;
			if(sum==10)
			j++;
		if(j>=k)
		break;

}
cout<<i<<endl;
	return 0;
}

