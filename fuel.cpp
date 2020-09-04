#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    int canCompleteCircuit(const vector<int> &A, const vector<int> &B);
};

int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    vector<int> solutions;

    
    for(int i=0;i<A.size();i++)
    {
        int flag = 0;
        int ava_fuel = 0;
        int curr_station = i;
        
        int count = A.size();
        while(count-1)
        {
            
            ava_fuel += A[curr_station];
            
            if(ava_fuel < B[curr_station])
            {
                flag = 1;
                break ;
            }
            else
            {
                ava_fuel -= B[curr_station];
                curr_station++;
                if(curr_station == A.size()) curr_station = 0;
            }
            count--;
            
            
        }
        if(flag == 0)
        {
            cout<<"executed"<<endl;
            solutions.push_back(i);
        }
        
        
    }
    for(int i=0;i<A.size();i++)
    {
        cout<<solutions[i]<<endl;
    }
    
    if(solutions.size() == 0)
    {
        cout<<"executed"<<endl;
        return -1;
                    

    } 
    else{
        //find the minimum among all the possible
        sort(solutions.begin() , solutions.end());
        return solutions[0];
    }
    
    
}

int main()
{
    Solution s1;
    vector <int> A{1};
    vector<int > B{4};
    int result = s1.canCompleteCircuit(A , B);
    cout<<"result is "<<result;
}


