#include<bits/stdc++.h>
using namespace std;

//sum of n natural numbers using recursion

int sigma_N(int x)
{
    if(x != 0)
    {
       x = x + sigma_N(x-1);     //recursion used
       return x;
    }
    else
    {
        return x;
    }


}
int main()
{
    int n,sum;
    cin>>n;
    sum = sigma_N(n);
    cout<<sum<<"\n";
}