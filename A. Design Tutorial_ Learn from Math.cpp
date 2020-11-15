#include<bits/stdc++.h>
using namespace std;
bool marks[1000001];
void sieve(){
	int n = 1000001;
	for(int i=2;i<n;i+=2){
		marks[i]=true;
	}
	for(int i=3;i*i<n;i+=2){
		if(marks[i]==false){
			for(int j=i*i;j<n;j+=i+i){
				marks[j]=true;
			}
		}
	}
	marks[1]=true;
	
}
int main()
{
	sieve();
	int x,y,n;
	scanf("%d",&n);
	if(n%2==0){
		x = n/2;
		y = n/2;
		while((marks[x]==false) || (marks[y]==false)){
			x--;y++;
		}
		printf("%d %d\n",x,y);
	}
	else{
		x = n/2;
		y = n/2+1;
		while((marks[x]==false) || (marks[y]==false)){
			x--;y++;
		}
		printf("%d %d\n",x,y);
	}
}
	
