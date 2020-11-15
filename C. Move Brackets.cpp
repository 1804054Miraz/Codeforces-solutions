#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        string st;
        cin>>st;
        int open=0,close=0;
        for(int i=0;i<n;i++)
        {
            if(st[i]=='(')
            {
                open++;
            }
             else if(st[i]==')')
            {
                if(open>0)
                {
                    open--;
                }
            }

        }
        for(int i=n-1;i>-1;i--)
        {

             if(st[i]==')')
            {
                close++;
            }
            else if(st[i]=='(')
            {
                if(close>0)
                {
                    close--;
                }
            }

        }
        cout<<max(open,close)<<endl;
    }
}
