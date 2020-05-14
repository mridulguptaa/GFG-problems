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
        int n = 499;//rand()%1000+1;
        int m = 100;//rand()%1000+1;
        //cout<<n<<" "<<m<<"\n";

        for (int i = 0; i < n; ++i){
        	int temp = rand()%2;
        	if(temp==0) cout<<"W";
        	else cout<<"B";
        }
        cout<<"\n";
        cout<<m;
        cout<<"\n";
        cout<<"~\n";
    }
    return 0;
}