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
	int left=0,right,n;
		cin>>n;
	int ar[n];

	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int sereja=0,dima=0;
	right=n-1;
	for(int i=1;left<=right;i++){
		
		if(ar[left]>ar[right]){
			if(i%2==0)  dima += ar[left++];
			else  sereja +=ar[left++];
		}
	else
	{
		if(i%2==0)  dima += ar[right--];
		else  sereja +=ar[right--];
		
	}
}
		cout<<sereja<<" "<<dima<<endl;
	return 0;
}

