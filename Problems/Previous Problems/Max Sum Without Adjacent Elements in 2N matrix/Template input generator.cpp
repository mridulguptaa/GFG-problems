#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input4.txt", "w", stdout);    
    srand(time(NULL));
    //int t = rand()%100+1;
    int t=1;
    cout<<t<<"\n";
    while(t--)
    {
        int n = 10000;//rand()%100000+1;
        cout<<n<<"\n";
        for (int i = 0; i < n; ++i){
        	cout<<1000000000<<" ";//1 + rand() %1000000000<<" ";
        }
        cout<<"\n";
        for (int i = 0; i < n; ++i){
        	cout<<1000000000<<" ";//1 + rand() %1000000000<<" ";
            
        }
        cout<<"\n";
        cout<<"~\n";
    }
    return 0;
}