///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
int main(){
	int ar[4];
	for(int i=0;i<4;i++){
		scanf("%d",&ar[i]);
	}
	sort(ar,ar+4);
	if((ar[0]+ar[3])==(ar[1]+ar[2]))
	printf("YES\n");
	else if((ar[1]+ar[3])==(ar[0]+ar[2]))
	printf("YES\n");
	else if((ar[1]+ar[0]+ar[2])==ar[3])
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}

