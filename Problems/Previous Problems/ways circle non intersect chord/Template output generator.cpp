#include<bits/stdc++.h> 
using namespace std; 
#define mod 1000000007
#define int long long int
#define N 200005
int dp[N];
int ways(int n)
{
    if(n==2 or n==0) return 1;    
    if(dp[n]!=-1) return dp[n];
    int ans=0;
    for(int i=2;i<=n;i+=2)
        ans=(ans + (1LL*(ways(i-2))%mod*(1LL*ways(n-i))%mod)%mod)%mod;
    return dp[n]=ans;
}

int32_t main() 
{	
    freopen("input5.txt", "r", stdin);
    freopen("output5.txt", "w", stdout);
    	
    int t;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ways(2*n)<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
} 
