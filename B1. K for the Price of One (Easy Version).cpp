#include<bits/stdc++.h>
using namespace std;

int  main()
{
	int n,p,k,j,t;
	
	
	cin>>t;
	while(t--){
		
	cin>>n>>p>>k;
	int ar[10009]={0};
	//memset(ar,0,sizeof(ar+n));
	
	for(int i=0;i<n;i++)
	{
		 cin>>ar[i];
	 }
	 sort(ar,ar+n);
	 int cn = 0;
	 //cout<<"cn = "<<cn<<endl;
	if(ar[0]>p)
			{
				cn--;
				//break;
			}
	 for(j=0;j<n;j++)
	 {
		  
		if(max(ar[j],ar[j+1])>p)
		{
			//cout<<"max condition "<<endl;
			break;
		}
		else if(min(ar[j],ar[j+1])==0)
		{
			//cout<<"min = "<<(min(ar[j],ar[j+1]))<<endl;
			//cn--;
			break;
		}
		

		p = p - min(ar[j],ar[j+1]);
		//cout<<"p = "<<p<<endl;
		
		cn++;
		//cout<<"cn = "<<cn<<endl;
		//cout<<"j = "<<j<<endl;
		//cout<<"j+4 = "<<ar[j+4]<<endl;
	 }
	 cout<<cn+1<<endl;
 }
			 
		 	
}
