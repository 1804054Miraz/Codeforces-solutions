///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;

int main(){
	speed;
	int cod,math,st,test;
	cin>>test;
	while(test--){
		cin>>cod>>math>>st;
		if(cod==0 and math==0){
			cout<<0<<endl;
		}
		else if(st==0){
			if(cod==math){
				cout<<(cod+math)/3<<endl;
			}
			else if(cod>math){
				if(math*2 <= cod){
					cout<<math<<endl;
				}
				else if(math*2 > cod){
					cout<<(math+cod)/3<<endl;
				}
			}
			else if(cod<math){
				if(math >= 2*cod){
					cout<<cod<<endl;
				}
				else if(math < 2*cod){
					cout<<(math+cod)/3<<endl;
				}
			}
		}
		else
		{
			int les = min(min(math,cod),st);
			int cn = les;
			math=math-les;  cod=cod-les;  st=st-les;
			if(st==0){
				if(cod==math){
				cout<<((cod+math)/3)+cn<<endl;
			}
			else if(cod>math){
				if(math*2 <= cod){
					cout<<math+cn<<endl;
				}
				else if(math*2 > cod){
					cout<<((math+cod)/3)+cn<<endl;
				}
			}
			else if(cod<math){
				if(math >= 2*cod){
					cout<<cod+cn<<endl;
				}
				else if(math < 2*cod){
					cout<<((math+cod)/3)+cn<<endl;
				}
			}
			}
			else 
			{
				cout<<cn<<endl;
			}
		}
	}
			 
	return 0;
}

