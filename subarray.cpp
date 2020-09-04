#include<bits/stdc++.h>
using namespace std;


void printarr(int *arr , int start , int end)
{
    for(int i = start;i<= end;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printSubsets(int *arr , int size)
{
    for(int i = 0 ;i<size-1;i++)
    {
        cout<<arr[i]<<endl;
        for(int j = i+1; j<size;j++)
        {
            printarr(arr ,i , j);
        }

    }
}

int main()
{
    int arr[] = {3,1,2,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size);
    printSubsets(arr , size);

}