#include<bits/stdc++.h>
using namespace std;

string add_string(string num1 , string num2)
{
    

    int sum =0;
    int carry = 0;
    string result;
    
    int length = max(num1.length() , num2.length());
    while(num1.size()< length)  num1.insert(0, "0");
    while(num2.size()< length)  num2.insert(0, "0");
    
    //perform add
    for(int i = length-1;i>=0;i--)
    {
        sum = (num1[i]-'0')+(num2[i]-'0')+carry;
        carry = sum/10;
        result.insert(0 , to_string(sum%10));
    }
    if(carry) result.insert(0 , to_string(carry));
    return result;
}


string multiplyStrings(string str1, string str2) {
   
   //check for 0
   if(str1.length() == 1 && str1[0] == '0') return "0";
   if(str2.length() == 1 && str2[0] == '0') return "0";
   
   int sign  = 1;
   if(str1[0] == '-') 
   {
       sign = sign * (-1);
       str1.erase(str1.begin());
   }
   if(str2[0] == '-')
   {
       sign = sign * (-1);
       str2.erase(str2.begin());
   }
   
   
   
   
   
   string res;
   int index = 0;
   for(int i = str1.length()-1;i>=0;i--)
   {
        
        string x;   
        int carry = 0;
        for(int j = str2.length()-1;j>=0;j--)
        {
            //calculate x
            int num1 = str1[i]-'0';
            int num2 = str2[j]-'0';
            int mul = (num1*num2) + carry;
            carry = mul/10;
            x.insert(0, to_string(mul%10));
    
        }

        if(carry) x.insert(0 , to_string(carry));

        //append 0 to x
        for(int n =0;n<index;n++) x.append("0");
        

        
        res = add_string(res , x);
        index++;
       
    }
    int count = 0;
    //remove 0 from front
    for(int i = 0;i<res.size();i++) 
    {
        if(res[i] == '0') count++;
        else break;
    }
    
    res.erase(0 , count);
    
    if(sign == -1) res.insert(0,"-");
    return res;
   
}

int main()
{
    //program
    string ans = multiplyStrings("4416" , "-333");
    cout<<ans<<endl;
    return 0;

}