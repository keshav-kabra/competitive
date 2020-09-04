#include <bits/stdc++.h>
using namespace std;

// int sum_till_end(int *arr ,int start ,int end)
// {   
//     int sum = 0;
//     for(int i = start ; i<=end ;i++)
//     sum += arr[i]; 
//     return sum;
// }
// void find_sub_arr(int *arr , int N , int target)
// {
//     for(int i =0 ;i<N ;i++)
//     {
//         int index = i+1;
//         while(index < N)
//         {
//             int sum_N = sum_till_end(arr , i+1 , index);
//             if(arr[i] + sum_N == target)
//             {
//                 cout<<i+1<<" "<<index+1<<endl;
//                 return;
//             }
//             index++;
//         }
        
//     }
//     cout<<-1<<endl;
// }

void find_sub_arr(int *arr, int N , int target)
{
    int **x = new int*[N];
    for(int i =0;i<N;i++) x[i] = new int[N];
    
    //assign base case
    for(int i = 0; i<N;i++) x[i][i] = arr[i];
    
    //fill the x array
    for(int i = 0;i<N;i++)
    {
        for(int j = i+1 ;j<N;j++)
        {
            x[i][j] = arr[j] + x[i][j-1];
            if(x[i][j] == target)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return;
            }
            
        }
    }
    cout<<-1<<endl;
    return;
    
}

int main() {
	int T;
	cin>>T;
	for(int i = 0;i<T;i++)
	{
	    int N ;
	    int target;
	    cin>>N>>target;
	    int *arr = new int[N];
	    for(int j =0;j<N;j++)
	    {
	        cin>>arr[j];
	    }
	    find_sub_arr(arr , N , target);
	    
	}
	
	
	return 0;
}