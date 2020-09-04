#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
    string s1 , s2;
    //convert into lower case
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i= 0;i<s.length();i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z' )|| (s[i] >= 'A' && s[i] <='Z'))
        {
            s1 += s[i]; 
        }
    }
    for(int i= s1.length() -1; i>=0;i--) s2 += s1[i];
    if(s1 == s2) return true;
    else return false;

    
}


int main()
{
    string s;
    getline(cin , s);
    if(palindrome(s)) cout<<"yes !!";
    else {
        cout<<"NO !!";
    }
}