#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0,i,j,sum=0;
	scanf("%d",&n);
	int ar[10][10]={0};
	for(i=0;i<n;i++){
		sum = 0;
		for(j=0;j<n;j++){
			if(flag==0)
				ar[i][j]=1;
			else{ 
			 sum += ar[i-1][j]; 
			 ar[i][j] = sum;
		 }
		}
		flag=1;
		if(i==n-1)	break;
	}
	printf("%d\n",ar[i][j-1]);
}
	
