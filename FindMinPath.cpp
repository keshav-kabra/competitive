#include<bits/stdc++.h>
using namespace std;


int FindMinPath(vector<vector<int>> matrix  , int D_size , int R_size , int cur_max , int N)
{
    cout<<"called for F( " <<D_size<<","<<R_size<<" , "<<cur_max<<" )"<<endl; 
    
    int cur_max1 , cur_max2;

    //base case
    if((D_size > N-1 && R_size == N-1) || (R_size > N-1 && D_size == N-1))
    {
        return cur_max;
    }

    if(D_size > N-1)
    return INT_MAX;

    if(R_size >N -1)
    return INT_MAX;


    //for right
    if(matrix[D_size][R_size + 1] > cur_max)
    {
        cur_max1 = FindMinPath(matrix , D_size , R_size +1 , matrix[D_size][R_size +1] , N );
    }
    else
    {
        cur_max1 = FindMinPath(matrix , D_size , R_size +1 , cur_max , N );
   
    }
    
    //for down 
    if(matrix[D_size + 1][R_size] > cur_max)
    {
            cur_max2 = FindMinPath(matrix , D_size+1 , R_size , matrix[D_size +1 ][R_size ] , N );
    }
    else
    {
        cur_max2 = FindMinPath(matrix , D_size +1 , R_size  , cur_max , N );

    }

    int res = min(cur_max1 , cur_max2);    
    return res;


}


int main()
{
    //decl arr
    int N ;
    cin>>N;
    vector<vector<int>> matrix(N , vector<int>(N));
    //assign values

    for(int i=0;i<N;i++)
    {
        for(int j =0;j<N;j++)
        {
            cin>>matrix[i][j];
        }
    }

    int result = FindMinPath(matrix , 0 , 0 , 1, N);
    cout<<"result is  result"<<result <<endl;

    return 0;
    

}