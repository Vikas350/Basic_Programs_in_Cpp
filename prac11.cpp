#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Check Armstrong Number of three digits
    
    int n,rem,result=0;
    cin>>n;
    int original_num = n;
    while(n != 0)
    {
        rem = n % 10;
        result += pow(rem,3);
        n = n/10; //update number by remove a digit
    }
    cout<<result<<endl;
    if(result == original_num)
      cout<<"number is Armstrong!\n";
    else
      cout<<"number is not Armstrong!\n"; 
    
    

    

}