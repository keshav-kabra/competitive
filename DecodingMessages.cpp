#include<bits/stdc++.h>
using namespace std;
unordered_map<string , int > hm;


int Find(string num)
{

    cout<<"function called for "<<num<<endl;
    long long count =0;
    if(num =="") 
    {
        hm[num] = 1;
        return 1;
    }
    if(num[0]=='0' ) 
    {
        hm[num] = 0;
        return 0;
    }
    long long  val =  stoll(num, nullptr, 10)     ;
    if(val > 0 && val < 11) 
    {
        hm[num] = 1;
        return 1;
    }

    //check if this key already exists
    if(hm.find(num) != hm.end())
    {
        cout<<"executed "<<endl;
        return hm[num];
    }

    count+= Find(num.substr(1));
    string str = num.substr(0,2);
    if(stoll(str , nullptr , 10) < 27 )
    count+= Find(num.substr(2));
    hm[num] = count;
    return count;  

}

int main()
{
    string num = "221323423230";
    long long count = Find(num);
    cout<<count<<endl;
    return 0;
}