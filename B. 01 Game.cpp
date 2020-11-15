#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cn_0,cn_1,len;
    string st;
    cin>>test;
    while(test--)
    {
        cin>>st;
        len = st.size();
        cn_0=0;cn_1=0;
        for(int i=0;i<len;i++)
        {
            if(st[i]=='0')
            {
                cn_0++;
            }
            else
            {
                cn_1++;
            }
        }
        if(cn_0<cn_1)
        {
            if(cn_0%2)
            {
                cout<<"DA\n";
            }
            else
            {
                cout<<"NET\n";
            }
        }
        else
        {
          if(cn_1%2)
            {
                cout<<"DA\n";
            }
            else
            {
                cout<<"NET\n";
            }
        }
    }
}
