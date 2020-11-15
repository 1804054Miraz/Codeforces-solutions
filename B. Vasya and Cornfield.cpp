#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int n;
	scanf("%d",&n);
	while(n--){
		int x1,y1;
		scanf("%d%d",&x1,&y1);
		
		if(abs(y1-x1)<=y && (x1+y1>=y) && (x1+y1<=x+x-y)){
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
}
