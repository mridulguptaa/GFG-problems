#include<bits/stdc++.h> 
using namespace std; 

int solve(string A, int B) 
{
    int n=A.length();
    
    int dp[n+1][B+1];
    for(int i=0;i<=n;i++) for(int j=0;j<=B;j++) dp[i][j]=1e9;
    dp[0][0]=0;
    
    for(int j=1;j<=B;j++)   //stable
    {  
        for(int i=1;i<=n;i++)   //horse number
        {
            int b=0,w=0;
            for(int k=i;k>0;k--)
            {
                b+=A[k-1]=='B';
                w+=A[k-1]=='W';
                dp[i][j]=min(dp[i][j],b*w+dp[k-1][j-1]);
            }
        }
    }
    
    if(dp[n][B]!=1e9) return dp[n][B];
    return -1;  
}
int32_t main() 
{   
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);
        
    int t;
    cin>>t;
    while(t--)
    {
        string A;
        int k;
        cin>>A>>k;
        
        cout<<solve(A,k);
        cout<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
}