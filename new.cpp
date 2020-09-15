#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s =  "keshackes";
    string sub = "kes";
    int k = 0;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        
        if(sub[k] == s[i])
        {
            k++;
            if(k == sub.length())
            {
                count++;
                k=0;   
            }

        }
        else 
        {
             if(k > 0 ) k = 0;
        }

    }


       cout<<count<<endl;
}