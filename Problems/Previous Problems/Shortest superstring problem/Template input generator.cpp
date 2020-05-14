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
        int n = 10;//rand()%10+1;
        cout<<n<<"\n";
        for (int i = 0; i < n; ++i){
        	int m = 50;//1 + rand() % 50;

        	for (int j=1; j<=m; j++) 
                printf("%c", 'a' + rand() % 26); 
  
            cout<<"\n";
        }
        cout<<"~\n";
    }
    return 0;
}