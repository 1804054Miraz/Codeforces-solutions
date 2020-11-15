#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	scanf("%d",&a);
	int ar[a];
	for(int i=0;i<a;i++){
		scanf("%d",&ar[i]);
	}
	sort(ar,ar+a);
	int sum=0;
	for(int i=0;i<a;i++){
		sum += ar[a-1]-ar[i];
	}
	printf("%d\n",sum);
}
