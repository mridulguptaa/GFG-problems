#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input3.txt", "w", stdout);    
        srand(time(NULL)); 
  
    int NUM; // Number of strings in array 
    NUM = 1 + rand() % 100000; 
    cout<<1<<"\n";
    set<int>s;
        cout<<NUM<<"\n";  
        { 
        
        for (int k=1; k<=NUM; k++) 
        { 
            int c = rand() % 100000;
            cout<<c<<" ";
            s.insert(c);
        } 
        cout<<"\n";
        int size = s.size();
        int c = 1+rand()%size;
        cout<<c<<"\n";
        cout<<"~\n";
    } 
    return 0;
}