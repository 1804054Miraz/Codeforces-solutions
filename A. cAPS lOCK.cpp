#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int n,cn=0,i,j;
    n=s1.size();


    for(i=0;i<n;i++){
            if(s1[i]==tolower(s1[i])){
                    cn++;
            }

    }
    if(cn==1 && s1[0]==tolower(s1[0])){
            s1[0]=toupper(s1[0]);
        for(i=1;i<n;i++){

            s1[i]=tolower(s1[i]);
        }
    }
    else if(cn==0){
        for(i=0;i<n;i++){

            s1[i]=tolower(s1[i]);
        }
    }

    cout<<s1<<endl;
}
