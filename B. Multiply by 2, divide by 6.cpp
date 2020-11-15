#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int cn=0;
        while(n>6 && n<=1000000000)
        {
            //cout<<n<<endl;
            if(n%6==0)
            {
                n /=6;
            }
            else
            {
                n = n*2;
            }
            cn++;
        }
        if(n==6)
        {
            cout<<++cn<<endl;
        }
        else if(n==1)
        {
            cout<<cn<<endl;
        }
        else if(n==3)
        {
            cn +=2;
            cout<<cn<<endl;
        }
        else if(n%2==0 || n%5==0)
        {
            cout<<-1<<endl;
        }

    }
}
