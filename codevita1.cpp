#include<bits/stdc++.h>
using namespace std;
struct train{
    int arrive , stop ;
};
void mysort(train *trains , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j< n-1;j++)
        {
            if(trains[j].arrive > trains[j+1].arrive)
            swap(trains[j] , trains[j+1]);
        }
    }
}
int main()
{
    int n , count =0;
    cin>>n;
    train *trains = new train[n]; // train array
    vector<int> occupied;

    for(int i=0;i<n;i++)
    {
        cin>>trains[i].arrive;
        cin>>trains[i].stop;
    } 

    mysort(trains , n);
    occupied.push_back(trains[0].arrive + trains[0].stop);
    count++;
    for(int i=1;i<n;i++)
    {
        int flag = 0;
        int arrive = trains[i].arrive;
        for(int j=0;j<occupied.size();j++)
        {
            if(arrive > occupied[j]) 
            {
                occupied[j] = arrive + trains[i].stop;
                flag = 1;
            }
            
        }
        if(flag == 0)
        {
            occupied.push_back(trains[i].arrive + trains[i].stop);
            count++;
        
        }
    }

    
    cout<<"total no of stations require"<<count<<endl;
    




}


    // for(int i=0;i<n;i++)
    // {
    //     cout<<trains[i].arrive<<"\t";
    //     cout<<trains[i].stop<<endl;
    // } 