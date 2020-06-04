#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input3.txt", "w", stdout);    
    srand(time(NULL)); 

    int t;
    t = 1+rand()%1000;
    cout<<t<<"\n";
    int NUM;
    NUM = 1 + rand() % 1000; 
    
    while(t--)
    {
        string s="";
        for(int i=0;i<NUM;i++)
        {
            int c = rand()%2;
            if(c==0)
                s.push_back('(');
            else s.push_back(')');
        }
        cout<<s<<"\n";
        cout<<"~";
        cout<<"\n";
    }

     
    return 0;
}