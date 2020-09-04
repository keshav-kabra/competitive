#include<bits/stdc++.h>
using namespace std;


void FindCoins(int *arr , int size , int V)
{
    int **A = new int*[size+1];
    for(int i =0;i<=size;i++) A[i] = new int[V+1];

    //fill array with int max

    
    //fill the base cases
    for(int i =0;i<=size;i++) A[i][0] = 0;
    for(int j=0; j<=V;j++) A[0][j] = 10000;


    //filling the table
    for(int i =1;i<size+1;i++)
    {
        for(int j=1;j<V+1;j++)
        {
            if(j < arr[i-1])
            {
                A[i][j] = A[i-1][j];
            }
            else 
            {

                A[i][j] = min( A[i -1][j] , 1 + A[i][j - arr[i-1]]);
                if(i == 1 && j == 2)  
                {
                    cout<<" for checking min val A[i][j-1]  is  "<<A[i][j-1]<<" and 1 + A[i][j - arr[i-1]] this is "<<1 + A[i][j - arr[i-1]]<<" and value printed is "<<A[i][j]<<endl; 
                }
            }
        }

        
    }


    //print table
    for(int i=0;i<=size;i++)
    {
        for(int j=0;j<=V;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


}

int main()
{
    int V = 13;
    int arr[] = {2,3,5,6};

    int size = sizeof(arr)/sizeof(arr[0]);
    FindCoins(arr , size , V);
    cout<<"done"<<endl;
    return 0;
}





    //filling the table
    // int div ;
    // for(int i=1;i<=size;i++)
    // {
    //     for(int j=1;j<=V;j++)
    //     {
    //         div = j / arr[i-1];
    //         if(j % arr[i-1] == 0) 
    //         { 
    //             A[i][j] = div;
    //             cout<<" value inserted "<<A[i][j]<<" at i "<<i<<" and j "<<j<<endl;

                
    //         }
    //         else if(div > 0)
    //         {
    //             while(div > 0)
    //             {
    //                 int remaning = (div*arr[i -1]);
    //                 if(A[i][j - remaning] == 0) div--;
    //                 else {
    //                     A[i][j] = min( (div + A[i][j-remaning] ) , (A[i-1][j])  );
    //                     cout<<" value inserted "<<A[i][j]<<" at i "<<i<<" and j "<<j<<endl;

    //                     break;
    //                 }
    //             }
    //         }
    //         // else {
    //         //     A[i][j] = A[i-1][j];
    //         //     cout<<" value inserted "<<A[i][j]<<" at i "<<i<<" and j "<<j<<endl;
    //         // }
    //         A[i][j] = min(A[i][j] , A[i-1][j-1]);
    //     }
    // }

