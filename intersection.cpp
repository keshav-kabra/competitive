#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code for sort approach

    int a[] = { 1,2,2,3,4};
    int b[] = {1,2,7,9};
    int size_a = 5 , size_b = 4;
    int index_a = 0 , index_b = 0;
    sort(a, a+5);
    sort(b , b+4);



    while(index_a < size_a -1 && index_b < size_b-1)
    {
        if(a[index_a] == b[index_b]) 
        {
            cout<<a[index_a]<<endl;
            index_a++;
            index_b++;
        }
        else if(a[index_a] > b[index_b]) index_b++;
        else
        {
            index_a++;
        }
        

    }


    //code for bool approach


    /*     int a[] = { 1,2,2,3,4};
    int b[] = {1,2,7,9};
    int size_a = 5 , size_b = 4;

        bool *bool_a = new bool[size_a];
        bool *bool_b = new bool[size_b];

        for(int i=0; i<size_a;i++) bool_a[i] = false;
        for(int i =0;i<size_b;i++) bool_b[i] = false;

        for(int i=0;i<size_a;i++)
        {
            for(int j =0;j<size_b;j++)
            {
                if(a[i] == b[j] && bool_a[i] ==false && bool_b[j] == false )
                {
                    cout<<a[i]<<endl;
                    bool_a[i] = true;
                    bool_b[j] = true;
                }
            }
        } */
        


    return 0;

}