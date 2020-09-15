#include<iostream>
#include<string>
using namespace std;

int LCS(string str1, string str2 , int i , int j)
{
    if(i == str1.length() || j == str2.length() ) return 0;

    else if(str1[i] == str2[j])
    return 1 + LCS(str1 , str2 , i+1 , j+1);

    else 
    return max(LCS(str1 , str2 , i+1 , j) , LCS(str1 , str2 , i , j+1)) ;
}

int main()
{
    string str1 = "keshav";
    string str2 = "hkesa";

    cout<<LCS(str1 , str2 , 0 , 0)<<endl;
    return 0;
}