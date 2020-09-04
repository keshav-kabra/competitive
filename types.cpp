#include<bits/stdc++.h>
using namespace std;


long long merge(int *arr , int *l , int *r , int length_l , int length_r)
{
    long long count =0;
    int i =0 , j=0, k=0;
    while(i<length_l && j<length_r)
    {
        if(l[i] <= r[j])
        arr[k++] = l[i++];

        else{
            count += length_l - i;
            arr[k++] = r[j++];
        }

    }
    while(i<length_l)
    arr[k++] = l[i++];
    while(j<length_r)
    arr[k++] = r[j++];

    return count;
}

long long  mergesort(int *arr , int size)
{
    if(size < 2) return 0 ;

    //do partition                                                      0,1,2,3,4,5   size = 6  
    int mid = (size/2);                                              //{3,4,1,6,2,8}
    int *l = new int[size/2];
    int *r = new int[(size) - (size/2)];

    for(int i =0;i<mid;i++)
    l[i] = arr[i];

    for(int j = mid;j<size;j++)
    r[j-mid] = arr[j];

    mergesort(l , mid);
    mergesort(r , (size-mid));
    long long count = merge(arr , l , r , mid , (size-mid) );
    return count;


}

long long inversion(int *arr, int size)
{

    if(size < 2) return 0;

    //do partition                                                      0,1,2,3,4,5   size = 6  
    int mid = (size/2);                                              //{3,4,1,6,2,8}
    int *l = new int[size/2];
    int *r = new int[(size) - (size/2)];

    for(int i =0;i<mid;i++)
    l[i] = arr[i];

    for(int j = mid;j<size;j++)
    r[j-mid] = arr[j];


    long long x = inversion(l , mid);
    long long y = inversion(r , (size-mid));
    long long z = mergesort(arr , size);
    return x+y+z; 

}
int main()
{
    int N;
    cin>>N;
    int *arr = new int[N];
    for(int i =0;i<N;i++)
    {
        cin>>arr[i];
    }


    // int arr[] = {3,4,1,6,2,8}; 
    // int size = sizeof(arr)/sizeof(arr[0]);
    long long count = inversion(arr , N);
    //print arr

    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    cout<<"inversion count is "<<count<<endl;
    cout<<endl;
    return 0;
}

//42
//468 335 1 170 225 479 359 463 465 206 146 282 328 462 492 496 443 328 437 392 105 403 154 293 383 422 217 219 396 448 227 272 39 370 413 168 300 36 395 204 312 323
