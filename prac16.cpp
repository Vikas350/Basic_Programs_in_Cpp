#include<bits/stdc++.h>
using namespace std;

//function to check number is prime or not
int Check_Prime(int x)
{
    int j,flag=0;
    for(j=2;j<x;j++)
    {
        if(x % j == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;

}
int main()
{
    int n1,n2,i,temp;
    cin>>n1>>n2;

    //check numbers one by one using loop
    for(i=n1+1;i<n2;i++)
    {
         temp = Check_Prime(i);
         
         if(temp == 0)
           cout<<i<<"\t";
    }
    

   return 0;
}