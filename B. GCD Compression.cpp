#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num;
    cin>>n;
    while(n--)
    {
        cin>>num;
        num = num*2;
        int ar[num+1],br[num-2];
        for(int i=1;i<=num;i++)
        {
            cin>>ar[i];
        }
        bitset<2005>visit;
        int sum=0,cn=0;
       // cout<<num<<endl;
        for(int k=0,i=1;i<=num;i++)
        {
            sum=0;
            if(visit[i]==0)
            {
                for(int j=i+1;j<=num;j++)
                {
                    if(cn>=(num-2))
                            {
                                //cout<<"cn = "<<cn<<endl;
                                break;
                            }
                           // cout<<"Cn = "<<cn<<endl;
                       // cout<<"arj = "<<ar[j]<<" "<<visit[ar[j]]<<endl;
                    if(visit[j]==0)
                    {
                        sum = ar[i]+ar[j];
                           // cout<<"sum = "<<sum<<endl;
                        if(sum%2==0)
                        {

                            br[k++]=i;
                            br[k++]=j;
                            visit[i]=1;
                            visit[j]=1;
                            cn+=2;
                           // cout<<ar[i]<<"   "<<ar[j]<<endl;
                           // cout<<"arj = "<<ar[j]<<" "<<visit[j]<<endl;
                            break;
                        }
                    }
                   //cout<<"arj = "<<ar[j]<<" "<<visit[ar[j]]<<endl;
                }

            }
        }
        for(int i=0;i<num-2;i++)
        {
                cout<<br[i]<<" ";
            if((i+1)%2==0)
            {
                cout<<endl;
            }

        }
        //cout<<endl;

    }
}
