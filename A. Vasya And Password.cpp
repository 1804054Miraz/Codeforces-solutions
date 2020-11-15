#include<bits/stdc++.h>
using namespace std;
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	//speed;
	int n,sz,dig,cap,sm;
	scanf("%d",&n);
	string st;
	
	for(int j=0;j<n;j++){
		cin>>st;
		dig = sm = cap = 0;
		int lo=-1,up=-1,d=-1;
		sz = st.size();
	//	
			for(int i = 0; i < sz; i++) {
			if(islower(st[i])) {
				lo = i;
				sm++;
			} else if(isupper(st[i])) {
				up = i;
				cap++;
			} else if(isdigit(st[i])) {
				d = i;
				dig++;
			}
		}
		if(dig>0 and sm>0 and cap>0){
			cout<<st<<endl;
		}
		else{
		printf("lo=%d  up=%d  d=%d\n",lo,up,d);
		for(int i = 0; i < sz; i++) {
			if(lo == -1 && i != up && i != d) {
				st[i] = 'a';
				lo = i;
			}
			 else if(up == -1 && i != lo && i != d) {
				st[i] = 'A';
				up = i;
			} 
			else if(d == -1 && i != up && i != lo) {
				st[i] = '0';
				d = i;
			}
		}
	cout<< st <<endl;
}
}	
	return 0;
}

