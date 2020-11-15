#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[4];
	for(int i=0;i<4;i++){
		cin>>ar[i];
	}
	sort(ar,ar+4);
	if(ar[3]>ar[2]+ar[1] && ar[2]>ar[1]+ar[0]){
		cout<<"IMPOSSIBLE\n";
	}
	else if(ar[3]<ar[2]+ar[1] || ar[2]<ar[1]+ar[0]){
	cout<<"TRIANGLE\n";
}
else
{
	cout<<"SEGMENT\n";
}

}

