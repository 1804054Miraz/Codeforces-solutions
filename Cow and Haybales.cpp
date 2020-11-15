#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int t,d,n,daybale=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d%d",&n,&d);
		int ar[n];
		for(int j=0;j<n;j++){
			scanf("%d",&ar[j]);
		}
		daybale=ar[0];
		//cout<<daybale<<endl;
		for(int j=1;j<n;){
			
			if(ar[j]>0){
				int p = j;
				d = d-p;
				if(d<0)
				break;
				daybale++;
				ar[j]--;
				
				//cout<<"d = "<<d<<endl;
				//cout<<"p = "<<p<<endl;
			}
			else if(ar[j]<=0){
				j++;
				//cout<<"j = "<<j<<endl;
			}
			if(d<=0)break;
		}
		cout<<daybale<<endl;
	}
}

