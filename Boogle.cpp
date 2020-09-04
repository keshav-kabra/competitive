#include <bits/stdc++.h>
using namespace std;


bool check(string s , vector<vector<bool>> visited , int p , int q , vector<vector<char>>  Matrix , int M , int N)
{
	if(s.length() == 0) return true;
	visited[p][q] = true;
	char word = s[0];
	bool present = false;
	int row_check[8] = {1, -1, 0, 0, 1, 1, -1, -1};
	int col_check[8] = {0, 0, 1, -1, 1, -1, -1, 1};

	for(int i=0;i<8;i++)
	{
		int row = p + row_check[i];
        int col = q + col_check[i];
		// if(row == 1 && col == 1) cout<<"this is the value of matrox "<<Matrix[row][col]<<endl;

		if(row >=0 && row <M && col >=0 && col<N && visited[row][col] == false && Matrix[row][col] == word)
		{
			present = check(s.substr(1) , visited , row , col , Matrix , M , N);
			if(present) return true;
		}
	}
	//value for this char does not exists
	return false;
	
	
}

void Boogle(string *arr , int dict_size  , vector<vector<char>> Matrix  ,int M , int N)
{
	map<string , bool> exists;
	int flag = 0;
    for(int x =0;x<dict_size;x++)
	{
		string cur = arr[x];
		cout<<"checking for string "<<cur<<endl;
		vector<vector<bool>> visited(M , vector<bool>(N));
		for(int i=0;i<M;i++) for(int j =0;j<N;j++) visited[i][j] = false;

		//check for the first char
		for(int i =0;i<M;i++)
		{
			for(int j=0;j<N;j++)
			{
				if(Matrix[i][j] == cur[0])
				{
					bool result = check(cur.substr(1) , visited , i , j ,Matrix , M , N);
					cout<<"result for check for "<<cur<<" is "<<result<<endl;
					if(result) 
					{
						cout<<"returned true for "<<cur<<endl;
						exists[cur] = true;
						flag = 1;
						break;
					}
				}
				if(flag == 1) break;
			}
		}

	}

	for(auto e : exists)
	{
		cout<<e.first<<" ";
	}
	exists.clear();
}

int main() {
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int size_dict;
	    cin>>size_dict;
	    string *arr = new string[size_dict];
	    for(int j =0;j<size_dict;j++)
	    {
	        cin>>arr[j];
	    }
	    
	    //input matrix ;M as row and N as columns
	    int M , N;
	    cin>>M>>N;
	    
	    vector<vector<char>> Matrix(M, (vector<char>(N)));

	    for(int a = 0;a<M;a++)
        {
            for(int b =0;b<N;b++)
            {
                char temp;
                cin>>temp;
                Matrix[a][b] = temp;
            }
        }

		//print matrix
		for(int a=0;a<M;a++)
		{
			for(int b=0;b<N;b++ )
			{
				cout<<Matrix[a][b]<<" ";
			}
			cout<<endl;
		}

	    Boogle(arr , size_dict , Matrix , M , N);
		cout<<endl;
	    
	}
	
	
	return 0;
}