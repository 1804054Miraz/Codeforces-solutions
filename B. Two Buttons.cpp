#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
			int cn=0;
		while(m>n){
			if(m%2==1){
				m +=1;
			cn++;
		}
			m /= 2;
			cn++;		
	}
	cn += n-m;
	printf("%d\n",cn);
}

