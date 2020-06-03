#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input3.txt", "w", stdout);    
        srand(time(NULL)); 
  
    int NUM; // Number of strings in array 
    NUM = 1 + rand() % 100000; 
    cout<<1<<"\n";
        cout<<NUM<<"\n";  
    { 
        
        for (int k=1; k<=NUM; k++) 
        { 
            char c = 'a' + rand() % 2;
            cout<<c;
        } 
        cout<<"\n";
        for (int k=1; k<=NUM; k++) 
        { 
            char c = 'a' + rand() % 2;
            cout<<c;
        } 
        cout<<"\n";
        cout<<"~\n";
    } 
    return 0;
}