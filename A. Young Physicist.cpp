#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	scanf("%d",&test);
	int sx=0,sy=0,sz=0;
	while(test--){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		sx +=x;
		sy +=y;
		sz +=z;
	}
	
	if(sx==0 && sy==0 && sz==0){
		printf("YES\n");
	}
	else 
	printf("NO\n");
}
