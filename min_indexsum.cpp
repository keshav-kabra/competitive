#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    //min index two sum problem
    string fruit1[] = {"apple" , "orange" , "mango" , "litchi"};
    string fruit2[] = {"guava" , "litchi" , "apple"};
    int val_of_i ;
    int indexsum = 1000;
    int cur_sum;
    int length1 = sizeof(fruit1)/sizeof(fruit1[0]);
    int length2 = sizeof(fruit2)/sizeof(fruit2[0]);
    for(int i=0; i < length1 ; i++)
    {
        for(int j =0;j<length2;j++)
        {
            if(fruit1[i] == fruit2[j])
            cur_sum = i+j;
            
            if(cur_sum < indexsum)
            {
                val_of_i = i;
                indexsum = cur_sum;
            }
        }
    }
    cout<<fruit1[val_of_i];

    


}