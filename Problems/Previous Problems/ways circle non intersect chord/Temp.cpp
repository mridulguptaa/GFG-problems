#include<bits/stdc++.h> 
using namespace std; 
#define mod 1000000007
#define N 100005
int dp[N];
int ways(int n)
{
    if(n==2 or n==0) return 1;    
    if(dp[n]!=-1) return dp[n];
    long long int ans=0;
    for(long long int i=2;i<=n;i+=2)
        ans=(ans + (1LL*(ways(i-2))%mod*(1LL*ways(n-i))%mod)%mod)%mod;
    return dp[n]=ans;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        memset(dp,-1,sizeof(dp));
        cout<<ways(2*n)<<"\n";
    }
    return 0;
} 
