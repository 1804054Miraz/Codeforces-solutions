#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    long long int nb,ns,nc,pb,ps,pc,cb=0,cs=0,cc=0,r;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]=='B')
        {
            cb++;
        }
        else if(st[i]=='S')
        {
            cs++;
        }
        else if(st[i]=='C')
        {
            cc++;
        }
    }
    long long int left=0,right=1e15,x,need;
    while(left<right-1)
    {
        x = (right-left)/2 + left;
        need = max(x*cb-nb, 0LL)*pb + max(x*cs-ns, 0LL)*ps + max(x*cc-nc, 0LL)*pc;
      //  cout<<left<<" "<<right<<" "<<x<<" "<<need<<endl;
        if(need<r)
        {
            left = x;
        }
        else if(need>r)
        {
            right = x;
        }
        else
        {
            left=x;
            break;
        }

    }
    cout<<left<<endl;
}
