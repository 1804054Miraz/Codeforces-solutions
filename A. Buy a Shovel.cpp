#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,a,i;
	scanf("%d%d",&k,&l);
	a = 1001;
	for(i=1;a%10 != 0;i++){
		
		a = k*i;
		if(a%10==0)
		break;
		else{
		a = a - l;
		if(a%10==0)
		break;
	}
		//cout<<a<<endl;
	}
	printf("%d\n",i);
}
		
		
