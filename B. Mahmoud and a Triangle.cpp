#include<bits/stdc++.h>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);///have to face problem using this in program
	//cin.tie(NULL);
	int n,i,a,b,c;
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		cin>>ar[i];
	}
	sort(ar,ar+n);
	for(i=n-1;i>=2;i--){
		a = ar[i];///a is greater than b and c;
		b = ar[i-1];
		c = ar[i-2];
		if(b+c>a){
			printf("YES\n");
		goto end;
	}
}
printf("NO\n");
end:;
return 0;
}
