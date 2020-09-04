#include<bits/stdc++.h>
using namespace std;


bool check(string s , vector<vector<char>> matrix   ,int  M ,int  N , vector<vector<bool>> visited, int p   , int q)
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
		// if(row == 1 && col == 1) cout<<"this is the value of matrox "<<matrix[row][col]<<endl;

		if(row >=0 && row <M && col >=0 && col<N && visited[row][col] == false && matrix[row][col] == word)
		{
			present = check(s.substr(1) , matrix  , M , N , visited , row , col );
			if(present) return true;
		}
	}
	//value for this char does not exists
	return false;
	
}

void boggler(vector<string> arr , vector<vector<char>> matrix , int M  , int N)
{
    map<string , bool> hm;
    for(int x = 0;x<arr.size();x++)
    {
        string cur = arr[x];
        char word = cur[0];
        vector<vector<bool>> visited(M , vector<bool>(N));
        //mark every thing to false

        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                visited[i][j] = false;
            }
        }

        //find in the matrix
        for(int i =0;i<matrix.size();i++)
        {
            for(int j = 0 ;j<matrix[i].size();j++)
            {
                if(word == matrix[i][j])
                {
                    bool result = check(cur.substr(1) , matrix  , M , N , visited , i , j);
                    if(result) 
                    {
                        hm[cur] = true;
                        break;
                    }

                }
            }
        }

    }

    for(auto e : hm)
    {
        cout<<e.first<<" ";
    }
    hm.clear();

}

int main()
{
    int T;
    cin>>T;
    for(int t =0;t<T;t++)
    {
        int size_dict;
        cin>>size_dict;
        vector<string> arr;
        //take array
        for(int i=0;i<size_dict;i++)
        {
            string cur;
            cin>>cur;
            arr.push_back(cur);
        }
        //take matrix
        int M , N ;
        cin>>M>>N;
        vector<vector<char>> matrix(M, vector<char>(N));
        for(int i =0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                char temp ;
                cin>>temp;
                matrix[i][j] = temp;
            }
        }
        //call boogle function
        boggler(arr , matrix , M , N);
        cout<<endl;


    }
}