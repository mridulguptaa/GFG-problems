#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input5.txt", "w", stdout);    
    srand(time(NULL));
    //int t = rand()%100+1;
    int t=1;
    cout<<t<<"\n";
    while(t--)
    {
        int n = rand()%1000+1;
        int m = rand()%100000+100;
        cout<<n<<" "<<m<<"\n";

        for (int i = 0; i < n; ++i)
           	cout<<rand()%1000+i+1<<" ";
        
        cout<<"\n";
        cout<<"~\n";
    }
    return 0;
}