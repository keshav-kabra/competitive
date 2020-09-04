#include<bits/stdc++.h>
using namespace std;
void merge(int *m , int *n , int size_m ,int  size_n);

void merge(int *m , int *n , int size_m ,int  size_n)
{
    int i=0,j=0,k=0;
    int *result = new int[size_n +size_m];

    //merge
    while(i < size_m && j< size_n)
    {
        if(m[i] < n[j]) result[k++] = m[i++];
        else result[k++] = n[j++];
    }

    while(i<size_m) result[k++] = m[i++];
    while(j<size_n) result[k++] = n[j++];

    //print 
    for(i=0;i< size_m+size_n;i++)
    cout<<result[i]<<"\t";

    
}
int main()
{
    // we two arr
    int m[] = {1,3,6,8,19,35};
    int n[10] = {5,9,15,20};

    int size_m = sizeof(m)/sizeof(m[0]);
    int size_n = 10 - size_m;

    merge(m , n , size_m , size_n);

}
