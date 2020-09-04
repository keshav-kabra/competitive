#include<bits/stdc++.h>
using namespace std;

void printPowerSet(int *arr , int size)
{
    vector<vector<int >> subsets;
    //add empty subset
    vector<int> sub;
    subsets.push_back(sub);

    //add the subsequent element as subsets0
    for (int i = 0;i<size;i++)
    {
        int val = arr[i];
        int subsets_size = subsets.size();

        for(int x = 0;x<subsets_size;x++)
        {
            vector<int> sub;
            sub = subsets[x];
            sub.push_back(val);
            subsets.push_back(sub);
        }

    }


    //print all the subsets
    for(int i=0;i<subsets.size();i++)
    {
        for(int j =0;j<subsets[i].size();j++)
        {
            cout<<subsets[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[] = {1,2,3 };
    int size  = sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr+size); 
    printPowerSet(arr , size);
}