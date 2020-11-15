#include<bits/stdc++.h>
#include<vector>
using namespace std;
int  main()
{
	int n,i,j,cn1=0,cn2=0;
	cin>>n;
	vector<string>v1;
	vector<string>v2;
	vector<string> ::iterator it;
	string st,mx;

	for(int i=0;i<n;i++)
	{
		cin>>st;
		v1.push_back(st);
		v2.push_back(st);
		
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	it = unique(v1.begin(),v1.end());
	v1.resize(distance(v1.begin(),it));
	
	//cout<<"v1 size " << v1.size()<<endl;
	//cout<<"v2 size " << v2.size()<<endl;
	
	for(i=0;i<v1.size();i++)
	{
		cn1=0;
		for(j=0;j<v2.size();j++)
		{
			if(v1[i]==v2[j])
			{
				cn1++;
				//cout<<v1[i]<<endl;
				//cout<<v2[j]<<endl;
			}
			//cout<<v2[j]<<endl;
			//cout<<"j "<<j<<endl;
			//cout<<"CN1 "<<cn1<<endl;
		}
			//cout<<endl<<endl;
			if(cn1>cn2)
			{
				cn2=cn1;
				mx = v1[i];
				//cout<<mx<<endl;
			}
		}
		cout<<mx<<endl;
	//cout<< *max_element(v.begin() , v.end())<<endl;
	//cout<<*min_element(v.begin() , v.end())<<endl;
	return 0;

}
