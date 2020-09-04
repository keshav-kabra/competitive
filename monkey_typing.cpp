#include<bits/stdc++.h>
using namespace std;

string pi = "314234758987245345664545";
int N = pi.length();
vector<string> fav_arr = { "3", "314" , "31423475898724534566454","234758987245" , "345664545"};
unordered_map<string, bool> exists; //used for order 1 look ups


int check(int pos)
{
    cout<<pos<<endl;
    if(pos == N-1) return 0; //base case
    int ans = INT_MAX;
    string cur = "";
    for(int j=pos;j<N;j++)
    {
        cur+= pi[j];
        if(exists[cur])
        {
            cout<<cur<<" found in fav_arr"<<"at j "<<j<<endl;
            int other = check(j+1);

            if(other != -1)
            {
                ans = min(ans , other +1);
            }
        }
    }
    if(ans == INT_MAX) ans = -1;
    cout<<"returnd ans "<<ans<<endl;
    return ans;


    
   
}
int main()
{
    for(string s: fav_arr) exists[s] = true;
    cout<<check(0)<<endl;

}