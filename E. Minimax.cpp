#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0),cout.tie(0);
    int t,n,i;
    cin>>t;
    while(t--)
    {
        string st; cin>>st; n=st.size(); sort(st.begin(),st.end());
        map<char,int>countt;
        set<char>distinct;
        for(i=0;i<n;i++)
        {
            countt[st[i]]++;
            distinct.insert(st[i]);
        }
       if(countt[st[0]]==n)
       {
             cout<<st<<endl;
             continue;
       }
       bool ok=0;
       for(i=0;i<n;i++)
       {
           if(countt[st[i]]==1)
           {
               cout<<st[i]; st.erase(st.begin()+i);
               cout<<st<<endl;
               ok=1;
               break;
           }
       }
       if(ok)
       {
           continue;
       }
       int first,second,j,k,cont,sz=distinct.size();
       if(sz==2)
       {
           first = countt[st[0]]-2;
           second = n-countt[st[0]];
           i=2,j=first+2;
           if(first<=second)
           {
               cout<<st[0]<<st[1];
                //cout<<first<<" "<<second<<endl;
               for(;j<n;)
               {

                   cont=0;
                   while(j<n and cont==0)
                   {
                       cout<<st[j++];
                       cont++;
                   }
                   cont=0;
                   while(i<first+2 and cont==0)
                   {
                       cout<<st[i++];
                       cont++;
                   }
               }
               cout<<endl;
           }
           else
           {
               cout<<st[0];
               while(j<n)
                cout<<st[j++];
                i--;
               while(i<first+2)
                cout<<st[i++];
               cout<<endl;
           }
       }
       else
       {
           string str;
           for(auto ch: distinct)
            str+=ch;

            first = countt[str[0]]-2;
           second = n-countt[str[0]];
         // cout<<first<<" "<<second<<endl;
           i=2,j=first+2; k=countt[str[0]]+countt[str[1]];
           if(first<=second)
           {
               cout<<st[0]<<st[1];
                for(;j<n;)
               {

                   cont=0;
                   while(j<n and cont==0)
                   {
                       cout<<st[j++];
                       cont++;
                   }
                   cont=0;
                   while(i<first+2 and cont==0)
                   {
                       cout<<st[i++];
                       cont++;
                   }
               }
               cout<<endl;
           }
           else
           {
               // cout<<str<<endl;
               cout<<str[0]<<str[1];
               i--;
               while(i<first+2)
               {
                   cout<<st[i++];
               }
               cout<<str[2];
               j++;
               while(j<k)
                cout<<st[j++];
                k++;
               while(k<n)
                cout<<st[k++];
               cout<<endl;

           }
       }

    }

}

