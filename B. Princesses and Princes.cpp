#include<bits/stdc++.h>
using namespace  std;

int main()
{
	int n,k,test,g,i;
	scanf("%d",&test);
	while(test--){
		scanf("%d",&n);
		int m =0;
		int flag;
		for( i=0;i<n;i++){
			scanf("%d",&k);
			flag = 0;
			bool visit[k];
			for(int j=0;j<k;j++){
				scanf("%d",&g);
	
			if(visit[g]==false && flag==0)
			{
				printf("g = %d\n",g);
				visit[g]=true;
				flag = 1;
			}
		}
		cout<<"flag = "<<flag<<endl;
		/*if(flag==0 and k!=0){
				while(visit[g]==true){
			g++;
		}
		printf("IMPROVE\n%d %d\n",i,g);
	}*/
	if(k==0){
		printf("IMPROVE\n1 1\n");
	}
	
}
/*	
	if(flag==1)
	printf("OPTIMAL\n");
	}*/
}
}

	



