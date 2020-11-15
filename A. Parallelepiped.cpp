///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e9 + 7; //10 to the power 9 plus 7

int main(){
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	double a,b,c;
	a = sqrt((s1*s3)/s2);
	b = sqrt((s1*s2)/s3);
	c = sqrt((s2*s3)/s1);
	cout<<4*(a+b+c)<<endl;
	return 0;
}

