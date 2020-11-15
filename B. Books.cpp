///Bismillahir Rahmanir Rahim
///I don't find relation between ans. ans ques.
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back

int main(){
	int num,time;
	cin>>num>>time;
	int i,j,sum=0,result=0;
	int ar[num];
	for(i=0,j=0;i<num;i++){
		cin>>ar[i];
		sum +=ar[i];
		if(sum>time){
			sum -=ar[j++];
		}
		else if(sum<=time)
		result = max(result,i-j+1);
	}
	printf("%d\n",result);
	
	return 0;
}
