#include<bits/stdc++.h>
using namespace std;
bool prime[1000001];
void sieve()
{
	int n=1000001;
	int i,j;
	for(i=2;i<n;i+=2){
		prime[i]=true;
	}
	for(i=3;i*i<n;i+=2){
		if(prime[i]==false){
			for(j=i*i;j<n;j+=i+i){
				prime[j]=true;
			}
		}
	}
	prime[1]=true;
}

int main()
{
	sieve();
	int n;
	cin>>n;
	long long int a,b;
	for(int i=0;i<n;i++){
		cin>>a;
			if(a==4){
				cout<<"YES\n";
			}
			else if(a==1){
			cout<<"NO\n";
		}
		else if(a%2==1)
		{
			b = sqrt(a);
			//cout<<b<<endl;
			if(prime[b]==false && (b*b==a)){
				cout<<"YES\n";
			}
			else 
			{
				cout<<"NO\n";
			}
		}
		else 
			cout<<"NO\n";
	}
}

