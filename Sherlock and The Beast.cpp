#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
    {
        int n,th,fi,t,f,c=0;
        cin>>n;
        th = n%3;
        fi = n%5;
        t = n/3;
        f = n/5;
        if(th == 0)
            {
            for(int i=0;i<n;i++)
                cout<<"5";
            cout<<endl;
        }
        
        else
            {
               for(int i=0;i<n;i++)
                   {
                   if(n%3 ==0)
                       break;
                   n = n-5;
                   c++;
               }
            if(n>=0)
                {
                for(int i=0;i<n;i++)
                    cout<<"5";
                for(int i=0;i<c;i++)
                    cout<<"33333";
                cout<<endl;
            }
            else 
                cout<<"-1"<<endl;
        }
    }
    return 0;
}
