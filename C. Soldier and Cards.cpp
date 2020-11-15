///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;

int main(){
	queue<int>q1,q2;
	int card,k1,k2,a;
	scanf("%d",&card);
		scanf("%d",&k1);
		
		for(int i=0;i<k1;i++){
			scanf("%d",&a);
			q1.push(a);
		}
		scanf("%d",&k2);
		for(int j=0;j<k2;j++){
			scanf("%d",&a);
			q2.push(a);
		}
		int q1_top,q2_top,cn=0;
		while(!q1.empty()){
			
			q1_top = q1.front();
			q1.pop();
			q2_top = q2.front ();
			q2.pop();
			if(q1_top>q2_top){
				q1.push(q2_top);
				q1.push(q1_top);
			}
			else
			{
				q2.push(q1_top);
				q2.push(q2_top);
			}
			cn++;
			if(q2.empty()){
				printf("%d 1\n",cn);
				break;
			}
			else if(q1.empty()){
			printf("%d 2\n",cn);
			break;
		}
		else if(cn>=200){
			printf("-1\n");
			break;
		}
		}
	//printf("%d\n",cn);
	return 0;
}

