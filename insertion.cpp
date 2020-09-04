#include<bits/stdc++.h>
using namespace std;

void selectionsort(int *a , int size)
{
    for(int i=0;i<size - 1;i++)
    {
        int min_index = i;
        //find max from i
        for(int j = i+1;j<size;j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        swap(a[i] , a[min_index]);


    }
}

void insertionsort(int *a , int size)
{
    for(int i =1;i<size;i++)
    {
        int hole = i;
        int val = a[i];
        while(hole > 0&& a[hole-1] > val)
        {
            a[hole] = a[hole-1];
            hole --;
        }
        a[hole] = val;
    }
}

int main()
{
    int a[]  = {1,4,2,5,3};
    int size = sizeof(a)/sizeof(a[0]);
    insertionsort(a ,size );
    //print
    for(int i =0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}