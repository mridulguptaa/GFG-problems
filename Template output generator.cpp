#include<bits/stdc++.h> 
using namespace std; 
#define mod 1000000007
int ways(int A) {
    long int color3 = 24;
    long int color2 = 12;
    long int temp = 0;
    for (int i = 2; i <= A; i++) {
        temp = color3;
        color3 = (11 * color3 + 10 * color2) % 1000000007;
        color2 = (5 * temp + 7 * color2) % 1000000007;
    }
    return (color3 + color2) % 1000000007;
}

int32_t main() 
{   
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
        
    int t;
    cin>>t;
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
