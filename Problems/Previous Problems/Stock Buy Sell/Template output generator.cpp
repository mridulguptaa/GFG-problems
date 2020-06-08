#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int maxProfit(vector<int>& p) {
      int endWithSell = 0;
      int endWithBuy = INT_MIN;
      int prevBuy =0, prevSell = 0;
      for(int i =0;i<p.size();i++){
         prevBuy = endWithBuy;
         endWithBuy = max(endWithBuy,prevSell - p[i]);
         prevSell = endWithSell;
         endWithSell = max(endWithSell, prevBuy + p[i]);
      }
      return endWithSell;
   }

int main()
{
    freopen("input1.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>p;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            p.push_back(a);
        }
        cout<<maxProfit(p)<<endl;
        cout<<"~\n";
        char c;
        cin>>c;
    }
    return 0;
}