#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Program to Reverse a Number
    long num,reverse=0,remainder;
    cin>>num;
    int original_num = num;
    while(num != 0)
    {
        remainder = num % 10;
        reverse = (reverse*10) + remainder;
        num = num/10;
        
    }
    cout<<"reverse of that number is : "<<reverse<<endl;

    //Program to Check Whether a Number is Palindrome or Not
    if(original_num == reverse)
       cout<<"this number is palindrome : like N A M A N"<<endl;

}