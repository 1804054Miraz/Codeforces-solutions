//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=1e9+7;
const int mxN=3000000;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)  cout << #x << "=" << x << endl
#define debug2(x, y)  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
# ---------------------------------------------------Import Libraries---------------------------------------------------
import sys
import time
import os
from math import sqrt, log, log2, log10, gcd, floor, pow, sin, cos, tan, pi, inf, factorial
from copy import copy, deepcopy
from sys import exit, stdin, stdout
from collections import Counter, defaultdict, deque
from itertools import permutations
import heapq
from bisect import bisect_left as bl
# If the element is already present in the list,
# the left most position where element has to be inserted is returned.
from bisect import bisect_right as br
from bisect import bisect

# If the element is already present in the list,
# the right most position where element has to be inserted is r

# ---------------------------------------------------Global Variables---------------------------------------------------
# sys.setrecursionlimit(100000000)
mod = 1000000007
# ---------------------------------------------------Helper Functions---------------------------------------------------
iinp = lambda: int(sys.stdin.readline())
inp = lambda: sys.stdin.readline().strip()
strl = lambda: list(inp().strip().split(" "))
intl = lambda: list(map(int, inp().split(" ")))
mint = lambda: map(int, inp().split())
flol = lambda: list(map(float, inp().split(" ")))
flush = lambda: stdout.flush()
int ar[27];
int main()
{

    int t,n,q;
    sc(t);
    while(t--)
    {
        sc(n),sc(q);
        string st,tmp;
        cin>>st>>tmp;
        reset(ar);
        for(auto i:st)
        {
           // cout<<i<<" ";
            ar[i-'a']++;
        }
        for(auto i:tmp)
        {
            ar[i-'a']--;
        }
        bool ans=false;
        for(int i=0;i<26;i++)
        {
            if(ar[i]<0 || ar[i]%q)
            {
                ans=true;
                break;
            }
            ar[i+1]+=ar[i];

        }
        if(ans)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }

    }
}
