#include <bits/stdc++.h>
using namespace std;

bool jumping(int x)
{
    if(x>=0 && x<=10 ) return true;
    int cur=0 , prev =0;
    cur = x%10;
    prev = cur;
    x = x/10;
    
    while(x>0)
    {
        
        cur = x%10;
        if(cur - prev != 1 && cur - prev != -1) 
        {
            cout<<"returned false for "<<cur<<" "<<prev<<endl;
            return false;
            
        }
        prev = cur;
        x = x/10;
        
    }
    return true;
    
}
int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N;
	    cin>>N;
	    for(int i=0;i<=N;i++)
	    {
	        if(jumping(i)) cout<<i<<"\t";
	    }
	    cout<<endl;
	}
	return 0;
}