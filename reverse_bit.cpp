#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n , count = 0;
    cin>>n;
    // cal binary
    vector<int > binaryarr(33);
    for(int i=0;i<33;i++) binaryarr[i] = 0;
    cout<<"working "<<endl;
    while(n>0)
    {
        
        
        int rem = n % 2;
        cout<<rem<<endl;
        cout<<n<<endl;
        cout<<"In loop"<<endl;
        // binaryarr.push_back(rem);
        binaryarr[count] = rem;
        

        n=n/2;
        count ++;
        
    }
    cout<<"0 th value "<<binaryarr[0]<<"\t"<<"1st value "<<binaryarr[1]<<endl;
    //we got reverse binary 
    // convert it into decimal
    long long  result = 0;
    int power = binaryarr.size() -2 ;
    for(int i=0;i<binaryarr.size();i++)
    {
        long long  num = pow(2 , power) * (  binaryarr[i] );
        cout<<num<<endl;
        result = result + (num);

        power--;
        

    }
    cout<<"worling correct here"<<endl;
    cout<< result<<endl;

}