#include<bits/stdc++.h>
using namespace std;
int factorial(int x)
{
  int temp;
  unsigned long fact=1;
  for(temp=1;temp <= x;temp++)
  {
     fact *= temp;

  }
  return fact;

}
int main()
{
    //Program to Find Factorial of a Number
    int num,ans;
    cin>>num;
    ans=factorial(num);
    cout<<ans<<endl;
    

}