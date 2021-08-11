#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Check Armstrong Number of n digits
    int n,rem,result=0,digits=0;
    cin>>n;
    int original_num = n;
    int O_num = n;
    while(n != 0)
    {
        n = n/10;
        digits++;
    }
    while(original_num != 0)
    {
        rem = original_num % 10;
        result += pow(rem,digits);
        original_num = original_num/10;

    }
    cout<<result<<endl;
    if(result == O_num)
      cout<<"number is Armstrong!\n";
    else
      cout<<"number is not Armstrong!\n"; 
    


}