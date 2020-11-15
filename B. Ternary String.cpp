///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define READ(n) freopen("Gfg.txt","r",stdin)
#define 	ll long long int
#define reset(a, b) memset(a, b, sizeof(a))
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;

int main(){
	speed;
	//freopen("Gfg.txt","w",stdout);//Write in the Gfg.txt file
	//freopen("Gfg.txt","r",stdin);//Read from the file Gfg.txt file
	//use assert function
	int t;
	cin>>t;
	while(t--){
		vector<int>vec;
		string st;
		cin>>st;
		int len = st.size();
		for(int l=0;l<len-2;l++){
			for(int r=l+1;r<len-1;r++){
				if(st[r]==st[l]){
					l = r;
				}
				else if(st[r+1]==st[l]){
					break;
				}
			else if(st[r]!=st[r+1]){
				r = r+1;
				vec.push_back(r-l+1);
				break;
			}
		}
		}
		if(vec.size()==0){
			cout<<0<<endl;
		}
		else 
		{
		sort(vec.begin(),vec.end());
		cout<<vec.front()<<endl;
	}
	}
	return 0;
}

