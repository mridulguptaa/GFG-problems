// Goods things are coming, just keep believing
 
#include <bits/stdc++.h>
using namespace std;
 
 
 
const int N = 1e6 + 5;
const int LG = 20;
const int mod = 1e9 + 7;
const int MAX = 1e3 + 5;
 
 
long double solve(long double arr[],int n)
{
    for(int i = 1; i <= n; i++)
    {
        arr[i - 1] = 1.0000000 - arr[i - 1];
    }
    sort(arr, arr + n, [](long double a, long double b)
    {
        return a > b;
    });
    if(arr[n - 1] == 0)
    {
        return 1.0000000000;
    }
    long double ret = (long double)0.00000000000000000;
    for(int len = 1; len <= n; len++)
    {
        for(int i = 0; i <= n - len; i++)
        {
            long double res = 0;
            long double pro = 1.0000;
            for(int j = i; j < i + len; j++)
            {
                pro *= arr[j];
            }
            for(int j = i; j < i + len; j++)
            {
                long double temp = pro / arr[j];
                temp *= (1.00000000 - arr[j]);
                res += temp;
            }
            ret = max(ret, res);
        }
    }
    return ret;
    
}
 
 
int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input3.txt", "r", stdin);
        freopen("output3.txt", "w", stdout);
    #endif
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        long double arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cout << fixed << setprecision(9) << solve(arr,n);
        cout<<"\n~";
    }
    
    return 0;
}