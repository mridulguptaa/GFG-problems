#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input3.txt", "w", stdout);    
    srand(time(NULL));
    int t = rand()%10+1;
    cout<<t<<"\n";
    while(t--)
    {
        int n = rand()%100+1;
        int k = rand()%100+1;
        cout<<n<<" "<<k<<"\n";
        for (int i = 0; i < n; ++i){
        	int m = -10000 + rand() %20000 ;
            cout<<m<<" ";
        }
        cout<<"\n";
        cout<<"~\n";
    }
    return 0;
}