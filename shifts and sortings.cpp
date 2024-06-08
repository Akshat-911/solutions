#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define ull unsigned long long
#define mxx 1e18-1
using namespace std;

ll gcd(ll a, ll b)
{
return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
return (a / gcd(a, b)) * b;
}

void solve()
{
    string s;
    cin>>s;
    ll rem=0;
    ll ans=0;
    ll n=s.size();
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            rem++;
        }
        else
        {  
            if(rem>0)
            ans+=(rem+1);
        }
    }
    cout<<ans<<endl;
}  

int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll tt;
cin>>tt;
while(tt--)
solve();
 return 0;
}
