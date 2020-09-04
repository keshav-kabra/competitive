#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //program for finding union
    int a[5] = {3,5,1,2,4};
    int b[3] = {1 ,8,9};

    for(int i=0;i<5;i++)
    for(int j=0;j<3;j++)
    if(a[i] == b[j])
    cout<<a[i]<<endl;


    //leetcode permutation
    //need to see this

    //find maximum product of sub array
    int arr[5] = {-1, -4 , -10 , 0 , 70};
    int maxproduct = 1;
    for(int i=0;i<5;i++)
    {
        int index = i;
        
        int previous_product, current_product;
        current_product = arr[i];
        cout<<"current product is "<<current_product<<endl;
        previous_product = current_product;
        while(current_product >= previous_product)
        {
            if(index > 4) break;
            previous_product = current_product;
            current_product *= arr[++index];
            if (current_product > maxproduct)
            {
                maxproduct = current_product;
                cout<<"max produt updated to "<<maxproduct<<endl;
            }
            

        }

    }
    cout<<maxproduct; 


    cout<<endl;
    //three sum problem
    int c[] = {-1 , 0, 1,2,-1, -4 };
    int target = 0;
    for(int i=0;i<6;i++)
    for(int j= i+1;j<6;j++)
    for(int k =j+1;k<6;k++)
    if(c[i]+c[j]+c[k] == 0)
    cout<<c[i]<<" "<<c[j]<<" "<<c[k]<<endl;


    cout<<endl;
    //find duplicate
    int y[] = {1,2,3,4,5,1};
    int size = sizeof(y)/sizeof(y[0]);

    sort(y , y+size);
    for(int i =0;i<size;i++)
    if(y[i] == y[i+1])
    cout<<y[i]<<endl;



    



    return 0;
}