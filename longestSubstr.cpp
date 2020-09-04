#include<bits/stdc++.h>
using namespace std;

bool IsPal(string s)
{
    string s2;
    for(int i = s.length()-1;i>=0;i--)
    {
        s2 += s[i];
    }

    if(s == s2) return true;
    else return false;
}

void findLongestPal(string s)
{
    int max_lenght = 1;
    string longestString;
    for(int i=0;i<s.length()-1;i++)
    {
        for(int j = 1;j<=s.length() -i ;j++)
        {
            string sub = s.substr(i , j);
            // cout<<sub<<endl;
            if(IsPal(sub))
            {
                
                if(sub.length() > max_lenght)
                {
                    max_lenght = sub.length();
                    longestString = sub;
                }
                // cout<<max_lenght<<" with string"<<longestString<<endl;
            }
        }
    }
    cout<<longestString<<endl;
}
int main()
{
    string s = "abnamalayalamano";
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    findLongestPal(s);

    return 0;

}