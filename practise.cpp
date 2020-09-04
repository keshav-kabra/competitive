#include<bits/stdc++.h>
using namespace std;
bool prime_num(int curr , int n)
{
    if( (2*curr) < n+1) return false;
    for(int i = 2;i<curr-1;i++)
    {
        if( curr % i == 0)
        return false;
    }
    return true;
}

int main()
{
    
    int n , count = 1;
    cin>>n;
    for(int i = 4;i<=n+1 ; i++)
    {
        int curr = i;
        
        bool val = prime_num(curr , n);
        if(val) 
        {
            cout<<curr<<endl;
            count++;
        }
    }
    
    
    cout<<"total count is "<<count;
}