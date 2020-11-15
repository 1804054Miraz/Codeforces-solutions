#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,x,y,speed,dis,min_time,mn;
	int n;
	scanf("%lf%lf",&a,&b);
	scanf("%d",&n);
	mn = 10000.0;
	
	while(n--){
		scanf("%lf%lf%lf",&x,&y,&speed);
		dis=sqrt((a-x)*(a-x)+(b-y)*(b-y));
		min_time = dis/speed;
		if(min_time<mn){
			mn = min_time;
		}
	}
	printf("%.22lf\n",(double)mn);
}
			
		
