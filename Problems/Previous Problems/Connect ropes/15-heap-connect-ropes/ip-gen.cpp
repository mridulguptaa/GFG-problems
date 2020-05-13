#include <bits/stdc++.h> 
using namespace std; 

int main() {
    freopen("input3.txt", "w", stdout);
    srand(time(NULL));
    int t = 5;
    cout<<t<<"\n";
    while(t--)
    {
    	int n = rand()%100000+1;
        cout<<n<<"\n";
        for (int i = 0; i < n; ++i)
            cout<<rand()%10000+1<<" ";
        cout<<"\n";
	    cout<<"~\n";
    }
    
    return 0;
}
