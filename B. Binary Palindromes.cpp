#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,n,i,cn0,cn1,not_palin=0,palin=0,stock,maker;
	cin>>test;
	while(test--){
		cin>>n;
		maker = not_palin=palin=0;
		while(n--){
		string str;
		cin>>str;
		cn0 = cn1 = 0;
		int sz = str.size();
		//cout<<sz<<endl;
		for(i=0;i<sz;i++){
			if(str[i]=='0'){
				cn0++;
			}
			else {
				cn1++;
			}
		}
	//cout<<cn0<<endl<<cn1<<endl;
		if(sz%2==1){
			palin++;
			maker++;
		}
		else if(cn1%2==1 && cn0%2==1){
			not_palin++;
			//maker++;
		}
		
		else{
			palin++;
		}
	}
		if(not_palin%2==1){
			if(maker>0){
		palin +=not_palin;
	}
	else {
		
		palin +=not_palin-1;
	}
	
	}
		else if(not_palin%2==0){
			palin +=not_palin;
		}
	
		cout<<palin<<endl;
}

}
