#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input3.txt", "w", stdout);    
        srand(time(NULL)); 
  
    int NUM; // Number of strings in array 
        cout<<1<<"\n";  
    { 
        NUM = 1 + rand() % 1000; 
        char c = '1' + rand()%9;
        cout<<c;
        for (int k=2; k<=NUM; k++) 
        { 
            char c = '0' + rand() % 10;
            cout<<c;
        } 
        cout<<"\n";
        cout<<"~\n";
    } 
    return 0;
}