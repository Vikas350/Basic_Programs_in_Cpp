#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Program to Check Whether a Number is Prime or Not
    int num,i,temp=0;
    cin>>num;
    // Here we taking input

    //here we can reduce the no of iteration by using n/2 instead pf n.
    //because a number n can not divisible by a number greator than n/2.
    for(i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            cout<<"number is not prime.\n";
            temp=1;
            break;
        }

    }
    if(temp == 0)
      cout<<"no is prime number.\n";



}
