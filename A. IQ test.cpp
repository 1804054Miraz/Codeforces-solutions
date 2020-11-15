#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	scanf("%d",&n);
	int odd=0,even=0,in_od,in_ev,ev_lock=0,od_lock=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(a%2==0)
		even++;
		else 
		odd++;
		if(even==1 and ev_lock==0){
			in_ev = i;
			ev_lock=1;
		}
		if(odd==1 and od_lock==0){
			in_od = i;
			od_lock=1;
		}
	}
	if(odd<even)
	printf("%d\n",in_od);
	else
	printf("%d\n",in_ev);
}
