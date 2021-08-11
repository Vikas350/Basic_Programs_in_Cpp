#include<iostream>
using namespace std;
int main()
{
    // Program to calculate the sum of numbers (10 numbers max)
    // If the user enters a negative number, the loop terminates
    float n,sum=0,temp=0;
    do
    {
        cin>>n;
         if(n<0.0)
          break;
        sum += n;
        temp++;
    
    } while (temp<=10);

    cout<<sum<<endl;
    
  //in programiz for loop is used   
}