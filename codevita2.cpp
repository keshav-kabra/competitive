#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max_prize = 1 , previous , curr , count =0  , n;
    cout<<"enter total people"<<endl;
    cin>>n;
    //for the first person
    cin>>curr;
    previous = curr;
    count++;

    //for all other persons
    for(int i=1;i<n;i++)
    {
        cin>>curr;
        if(curr > previous)
        {
            max_prize++;
            count += max_prize;
        }
        else
        {
            max_prize--;
            if(max_prize>0) count+= max_prize;
            else {
                count ++;
                max_prize = 1;
            }
        }
        previous = curr;
    }
    cout<<"max gift require are"<<count<<endl;
}