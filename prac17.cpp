#include<bits/stdc++.h>
using namespace std;

//Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers
int checkPrime(int n)
{
     int j,flag=1;
     for (j=2;j<=n/2;j++)
     {
         if(n%j==0)
         {
             flag=0;
             break;
         }
     }
     
     return flag;
}

int main()
{
    int i,N,flag2=0;
    cout<<"enter the number : ";
    cin>>N;
    for(i=2;i<=N/2;i++)
    {
        if(checkPrime(i)==1)             //check i is prime and N-i is also should prime to get sum = N which can write as sum of two prime 
        {
            if(checkPrime(N-i)==1)
            {
                cout<<"YES, it can be written as.\n";
                cout<<i<<" + "<<N-i<<" = "<<N<<endl;
                flag2=1;                //a variable for yes or no output
            }
        }
        
    }

    if(flag2==0)
    {
        cout<<"NO,it can not be written.\n";
    }

}
