#include<bits/stdc++.h> 
using namespace std; 
int ways(int A) {
    long long int color3 = 24;
    long long int color2 = 12;
    long long int temp = 0;
    for (int i = 2; i <= A; i++) {
        temp = color3;
        color3 = (11 * color3 + 10 * color2) % 1000000007;
        color2 = (5 * temp + 7 * color2) % 1000000007;
    }
    int ans =  (color3 + color2) % 1000000007;
    return (ans+1000000007)%1000000007;
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
        cout<<ways(n)<<"\n";
        char ch;
        cin>>ch;
        cout<<"~\n";
    }
    return 0;
} 
