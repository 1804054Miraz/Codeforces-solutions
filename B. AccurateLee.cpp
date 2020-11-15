#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,len;
    cin>>test;
    string st;
    while(test--)
    {
       cin>>len;
       cin>>st;
       int lock=0,cn_0=0;
        for(int i=0;i<len;i++)
        {
            if(st[i]=='1')
            {
                lock=1;
            }
            if(lock==1 && st[i]=='0')
            {
                    cn_0++;
            }
        }
        int x=0,y=0;
        for(int i=0;i<len;i++)
        {
            if(st[i]=='1')
            {
                break;
            }
            x++;
        }
        for(int i=len-1;i>-1;i--)
        {
            if(st[i]=='0')
            {
                break;
            }
            y++;
        }
       // cout<<x<<endl<<y<<endl;
      // cout<<cn_0<<endl;
        if(cn_0==0)
        {
            cout<<st<<endl;
        }
        else
        {
            x +=1;
            while(x--)
            {
                cout<<0;
            }
            while(y--)
            {

                cout<<1;
            }
            cout<<"\n";
        }


    }
}
