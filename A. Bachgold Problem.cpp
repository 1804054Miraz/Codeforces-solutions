
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	scanf("%d",&a);
	if(a%2==0){
		printf("%d\n",a/2);
		while(a!=2){
			printf("2 ");
			a = a - 2;
		}
		printf("2");
	}
	else {
		a = a-3;
		printf("%d\n",a/2+1);
		while(a!=0){
			printf("2 ");
			a-=2;
		}
		printf("3");
	}
	
}
