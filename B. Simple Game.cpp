///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648

int main(){
	int n,m,a,c;
	cin>>n>>m;
	if(n==1 and m==1)
	{
		cout<<1<<endl;
		return 0;
	}
	else if(n-m>m-1){
		cout<<m+1<<endl;//if m will less than n/2.
	}
	else
	cout<<m-1<<endl;// if m will grater than or equal to n/2.
	return 0;
}

