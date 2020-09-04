// Egg droping problem using recursive approach 
#include <bits/stdc++.h>
using namespace std;

int CountMinTrial(int N , int K)
{
    if(K == 0 || K == 1) return K; 
    if(N == 1) return K;
    
    int Min_ = INT_MAX;
    for(int i =1 ;i<= K;i++)
    {
        int ans = max( (1+ CountMinTrial(N-1 , i-1)) , (1+ CountMinTrial(N , K-i)) );
        Min_ = min(ans , Min_);
    }
    return Min_;
}


int main() {
	//code
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N , K;
	    cin>>N>>K;
	    int result = CountMinTrial(N , K);
	    cout<<result<<endl;
	}
	return 0;
}