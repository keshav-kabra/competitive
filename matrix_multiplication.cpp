#include<bits/stdc++.h>
using namespace std;

void  matrixMultiply(vector<vector<int>> A , vector<vector<int>> B , int M1 , int N2  , int M2)
{
    vector<vector<int >> result(M1 , vector<int>(N2));
    cout<<M1<<" "<<N2<<endl;
    for(int i =0;i<M1; i++)
    {
        for(int j =0;j<N2;j++)
        {
            for(int k =0;k <M2;k++)
            {
                result[i][j] += A[i][k] * B[k][j];
                
            }
            cout<<result[i][j]<<" ";
        }
    }

    cout<<endl;
    //print size
    for(int i =0;i<M1;i++)
    {
        for(int j =0;j<N2;j++) 
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    

}

int main()
{
    int M1 = 3;
    int N1 = 2 ;
    int M2= 2;
    int N2 = 3;





    vector<vector<int>> A(M1 , vector<int>(N1));
    vector<vector<int>> B(M2 , vector<int>(N2));

    for(int i =0;i<M1;i++)
    {
        for(int j =0;j<N1;j++)
        {
            int temp ;
            cin>>temp;
            A[i][j] = temp;
        }
    }

    //take input for B
    
    for(int i =0;i<M2;i++)
    {
        for(int j =0;j<N2;j++)
        {
            int temp ;
            cin>>temp;
            B[i][j] = temp;
        }
    }

    //print 2 vector


    for(int i = 0;i<M1;i++)
    {
        for(int j =0;j<N1;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


    for(int i = 0;i<M2;i++)
    {
        for(int j =0;j<N2;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }


    






    vector<vector<int >> result(M1 ,vector<int>(N2));
     matrixMultiply(A , B , M1 , N2  , M2);
    
    return 0;
    
}