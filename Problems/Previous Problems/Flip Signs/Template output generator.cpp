#include<bits/stdc++.h> 
using namespace std; 
#define mod 1000000007

int min_flips(vector<int> &A)
 {    
    int n=A.size();
    unordered_map<int,int>dp[2];
    int maxsum=0;
    for(int i=0;i<n;i++) maxsum+=(A[i]);  
    int sum=maxsum;
    for(int i=-maxsum;i<=maxsum;i++)
        dp[0][i]=1e9;
    
    dp[0][0]=0;
    int flag=1;
    for(int i=1;i<=n;i++)   //array elemet
    {
        for(int j=-maxsum;j<=maxsum;j++)    // try to make this
        {
            dp[flag][j]=1e9;
            if(j-A[i-1]<=sum && j-A[i-1]>=-sum)
                dp[flag][j]=dp[flag^1][j-A[i-1]];
            if(j+A[i-1]<=sum && j+A[i-1]>=-sum && dp[flag^1][j+A[i-1]]!=1e9)
                dp[flag][j]=min(dp[flag][j],dp[flag^1][j+A[i-1]]+1);
        }
        flag^=1;    //togggle 
    }
    for (int i = 0; i <= sum; i++) { 
        if (dp[flag ^ 1][i] != 1e9) 
            return dp[flag ^ 1][i]; 
    } 
  
    // In worst case we will flip max n-1 elements 
    return n - 1; 
}

int32_t main() 
{   
    freopen("input4.txt", "r", stdin);
    freopen("output4.txt", "w", stdout);
        
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>A;
        for(int i=0;i<n;i++)
        {
        	int a;
        	cin>>a;
        	A.push_back(a);
        }
        cout<<min_flips(A)<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
} 
