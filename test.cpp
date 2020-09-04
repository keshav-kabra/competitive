#include <iostream>
using namespace std;

void sort_arr(string *arr , int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j =0;j<size-1;j++)
        {
            string l1 = arr[j];
            string l2 = arr[j+1];
            if(l1.length() < l2.length()) swap(arr[j] , arr[j+1]); 
            
        }
    }
}

string FindLongestString(string s , string *arr , int size) 
{
        sort_arr(arr , size);
        cout<<"arra is sorted"<<endl;
        //check the sorted arr once
        for(int i =0;i<size;i++) 
        {
            cout<<"comming in the loop"<<endl;
            cout<<arr[i]<<endl;
        
        }
    return "";
}
int main() {
	//code
	int T;
    cout<<"enter T"<<endl;
	cin>>T;
	for(int i=0;i<T;i++)
	{
        cin.ignore();

	    int size;
        cout<<"enter size"<<endl;
        cin>>size;
	    string *arr = new string[size];
	    for(int j =0;j<2;j++)
	    {
            cout<<"enter "<<j+1<<" th value";
	        cin>>arr[j];
	    }
	    string s;
        cout<<"enter string"<<endl;
	    cin>>s;
	    FindLongestString(s , arr , size);
	}
	return 0;
}