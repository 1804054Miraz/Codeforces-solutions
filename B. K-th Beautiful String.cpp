#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	int test;
	cin>>test;
	while(test--){
	cin>>n>>k;
	string s1(n,'a');
	int i,b1,b2,j;
	
	   j=0;
	   i=0;
		while(i<k){	  ///j = 1,2,3,4,5...
			i +=++j; ///i = 1,3,6,10,15...
		}
		i -= j;
		b1 = n-j-1;
		b2 = n-1;
		s1[b1]='b';
		for(;i<k;i++){
			b2--;
		}
		s1[++b2]='b';
		cout<<s1<<endl;
		
		
}
}
/*	n=5
	i=1;	j=1
    aaabb	k=1
    i=3		 j=2
    aabab	k=2
    aabba	k=3
	i=6		 j=3
    abaab	k=4
    ababa	k=5
    abbaa	k=6
    i=10	 j=4
    baaab	k=7
    baaba	k=8
    babaa	k=9
    bbaaa 	k=10
    * /
