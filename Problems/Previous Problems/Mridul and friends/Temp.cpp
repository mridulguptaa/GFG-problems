// Goods things are coming, just keep believing
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
 
#define FOR(i, x, n) for(ll i = x; i < n; i++) 
#define pb push_back
#define pf push_front
#define ll long long
#define hii cout << "hii" << endl
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mpp make_pair
#define endl '\n'
#define ff first 
#define int long long
#define ss second
#define vi vector<int>
#define all(s) s.begin(), s.end()
#define si size()
 
template <class T> ostream& operator << (ostream &os, const vector<T> &v) { for (T i : v) os << i << ' '; return os; }
template <class T> ostream& operator << (ostream &os, const set<T> &v) { for (T i : v) os << i << ' '; return os; }
template <class T, class S> ostream& operator << (ostream &os, const pair<T, S> &v) { os << v.first << ' ' << v.second; return os; }
template <class T, class S> ostream& operator << (ostream &os, const unordered_map<T, S> &v) { for (auto i : v) os << '(' << i.first << "=>" << i.second << ')' << ' '; return os; } 
 
 
#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <class Arg1> void __f(const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 << endl; }
    template <class Arg1, class... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args) {
        const char* sep = strchr(names + 1, ',');
        cerr.write(names, sep - names) << " : " << arg1 << "  ";
        __f(sep + 1, args...);
    }
#else
#define trace(...) 0
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx2,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS
#endif // ifndef ONLINE_JUDGE
 
 
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
                trace(temp);
                temp *= (1.00000000 - arr[j]);
                res += temp;
                trace(res);
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
        freopen("input2.txt", "r", stdin);
        freopen("output2.txt", "w", stdout);
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