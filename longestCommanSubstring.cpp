#include<bits/stdc++.h>
using namespace std;

int LongestCommanSubstring(string str1 , string str2 , int M , int N)
{
    //declare matrix
    vector<vector<int>> mat(M+1 , vector<int>(N+1));

    //initialze base cases
    for(int i = 0;i<=M;i++) mat[i][0] = 0;
    for(int j =0;j<=N;j++) mat[0][j] = 0;

    //fill the table
    for(int i =1;i<=M;i++)
    {
        for(int j = 1;j<=N;j++)
        {
            if(str1[i-1] == str2[j-1])
            mat[i][j] = 1 + mat[i-1][j-1];

        }
    }

    int maximum = INT_MIN;
    //find the max in the table
    for(int i =1;i<=M;i++)
    {
        for(int j = 1;j<=N;j++)
        {
           if(mat[i][j] > maximum)
           maximum = mat[i][j];

        }
    }

    return maximum;    
}

int main()
{

    string str1 = "xyzqst";
    string str2 = "xszqp";
    int M = str1.size();
    int N = str2.size();
    cout<<LongestCommanSubstring(str1 , str2 , M , N)<<endl;
    return 0;

}