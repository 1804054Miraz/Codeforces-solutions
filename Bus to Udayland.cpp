#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	string st;
	int found = 0;
	vector<string>vec;
	for(int i=0;i<n;i++){
		getline(cin,st);
		for(int i=0;i<st.size();i++){
			if(found == 0 ){
				
				if(st[i]=='O' && st[i+1]=='O' && i<5){
					cout<<"YES"<<endl;;
					st[i]='+';
					st[i+1]='+';
					found = 1;
				}
			}
		}
		vec.push_back(st);
	}
	if(found == 0){
		cout<<"NO"<<endl;
	}
	else{
	auto it = vec.begin();
	while(!vec.empty()){
		cout<<*it<<endl;
		vec.pop_back();
		it++;
	}
}
}
					
	
