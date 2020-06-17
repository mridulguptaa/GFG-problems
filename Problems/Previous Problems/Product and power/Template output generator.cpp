#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int solve(int n,int k,vector<int>& a) {
    
    map <vector <int>, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++){
        int x = a[i];
        vector <int> b;
        for (int p = 2; p * p <= x; p++){
            if (x % p == 0){
                int cnt = 0;
                while (x % p == 0){
                    x /= p;
                    cnt++;
                }
                cnt %= k;
                if (cnt == 0){
                    continue;
                }
                b.push_back(cnt);
                b.push_back(p);
            }
        }
        if (x > 1){
            b.push_back(1);
            b.push_back(x);
        }
        vector <int> c = b;
        for (int i = 0; i < c.size(); i += 2){
            c[i] = k - c[i];
        }
        ans = ans + mp[c];
        mp[b]++;
    }
 
    return ans;
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
        vector<int>p;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            p.push_back(a);
        }
        cout<<solve(n,k,p)<<endl;
        cout<<"~\n";
        char c;
        cin>>c;
    }
    return 0;
}