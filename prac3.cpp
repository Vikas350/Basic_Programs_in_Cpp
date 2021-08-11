#include<iostream>
using namespace std;
int main()
{
    // Program to add numbers until the user enters zero
    int sum=0,n,i;
    
    do 
    {
       cin>>n;
       sum += n;
    }
    while(n!=0);
    cout<<sum<<"\n";
    return 0;
}
