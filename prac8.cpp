#include<bits/stdc++.h>
using namespace std;
int main()
{
    //C Program to Count Number of Digits in an Integer
    long num;
    int digits=0;
    cin>>num;
    while(num != 0)
    {
        num = num/10;
        digits++;
    }
    cout<<"no of digits is : "<<digits<<endl;

}