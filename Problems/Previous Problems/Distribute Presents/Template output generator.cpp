/*input
2
2 4
89384 87
*/
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

long long countWays(int n, int k)
{
    long long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[1] = k;
    long long same = 0, diff = k;
    for (int i = 2; i <= n; i++)
    {
        same = diff;
        diff = dp[i-1] * (k-1);
        diff%=1000000007;
        dp[i] = (same + diff);
        dp[i]%=1000000007;
    }
 
    return dp[n];
}

int main()
{
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<countWays(n,k)<<endl;
        cout<<"~\n";
        char c;
        cin>>c;
    }
    return 0;
}