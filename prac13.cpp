#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,n;
    cin>>n; //no of lines to be printed.

    // Half Pyramid of (*)
    //*
    //* *
    //* * *
    //* * * *
    //* * * * *

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    //Half Pyramid of Numbers
    //1
    //1 2
    //1 2 3
    //1 2 3 4
    //1 2 3 4 5

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    //Half Pyramid of Alphabets
    //A
    //B B
    //C C C
    //D D D D
    //E E E E E
    
    char p = 'A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<p<<" ";
        }
        cout<<"\n";
        p++;
    }

    //Inverted half pyramid of *
    //* * * * *
    //* * * *
    //* * * 
    //* *
    //*

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    } 

    // Inverted half pyramid of numbers
    //1 2 3 4 5
    //1 2 3 4 
    //1 2 3  
    //1 2
    //1

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    // Full Pyramid of *
    //        *
    //      * * *
    //    * * * * *
    //  * * * * * * *
    //* * * * * * * * *

    int k=0;
    for(i=1;i<=n;i++,k=0)
    {
        for(j=1;j<=n-i;j++)   //for spaces
        {
            cout<<"  ";

        }
        while(k != 2*i - 1)  //for proointing star *
        {
            cout<<"* ";
            ++k;
        }
        cout<<"\n";
    }



}
