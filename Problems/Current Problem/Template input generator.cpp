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
        int n = 100;//rand()%99+2;
        int m = 100;//rand()%99+2;
        cout<<n<<" "<<m<<"\n";

        for (int i = 0; i < n; ++i)
        {
        	for(int j=0;j<m;j++)
           		cout<<rand()%2+0<<" ";
           	cout<<"\n";
        }
        
        //cout<<"\n";
        cout<<"~\n";
    }
    return 0;
}