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
    	int LEN = 1+rand()%1000000;
        for (int j=1; j<=LEN; j++) 
            printf("%c", 'a' + rand() % 26);
        cout<<"\n";
        for (int j=1; j<=LEN; j++) 
            printf("%c", 'a' + rand() % 26);      
        cout<<"\n";
        cout<<"~\n";
    }
    return 0;
}