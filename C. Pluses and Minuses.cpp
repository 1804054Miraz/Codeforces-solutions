#include<bits/stdc++.h>
using namespace std;
int main()
{

int test,res = 0,cur,init,len;
string s;
cin>>test;
bool ok;
while(test--){
        res = 0;
        init=0;
        cin>>s;
        len = s.size();
        init=0;
   // for(init=0;init<=1000000;init++){//for init = 0 to inf
   while(1){
    cur = init++;
    ok = true;
    cout<<"cur = "<<cur<<endl;
    //res = 0;
    for(int  i = 0;i<len;i++){// to |s|
        res = res + 1;
        cout<<"res = "<<res<<endl;
        if (s[i] == '+')
            cur = cur + 1;
        else
            cur = cur - 1;
            cout<<"i = "<<i<<"  cur = "<<cur<<endl;
        if (cur < 0){
            ok = false;
            break;
        }
    }
    if (ok)
        break;
    }
    cout<<res<<endl;

}
}
