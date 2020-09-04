#include<bits/stdc++.h>
using namespace std;
int main()
{
    string conditions[10];
    //    using strtok
    string relation ;
    char s[] = "x>0andx>5";
    for(int i = 0;i<strlen(s);i++)
    {
        if(s[i] == 'a')
        {
            relation = "and";
            break;
        }
    }
    if(relation == "") relation = "or";


    char *token = strtok(s , "and");
    int index = -1;


    if(relation == "and")
    {
        while(token != NULL)
        {
            cout<<token<<endl;
            conditions[++index] = token;
            token = strtok(NULL , "and");
        }
    }
    else{
        
        while(token != NULL)
        {
            cout<<token<<endl;
            conditions[++index] = token;
            token = strtok(NULL , "or");
        }
    }

    int arr[2]  , i =-1;
   int smaller =-1, larger , num;
   while(index)
   {
        num = conditions[index][2];
        arr[++i] = num;
        index--;
   }
   if(arr[0] >arr[1]) {
       larger = arr[0];
       smaller = arr[1];
   }
   else{
       larger= arr[1];
       smaller = arr[0];
   }


}





//  string s = "x>0andx>5";
//     stringstream ss(s);
//     string word ;
//     while(getline(ss, word, ',')) cout<<word<<"\n";