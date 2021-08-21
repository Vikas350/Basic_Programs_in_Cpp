#include<bits/stdc++.h>
using namespace std;
#define ROW 3
#define COL 3
#define NEW_ORDER 3

int main()
{
    int n;
    int twoD_arr1[ROW][COL] = {{2,7,3},{1,5,8},{0,4,1}};   //row major order

    int twoD_arr2[ROW][COL] = {0};
    int twoD_arr3[ROW][COL] = {0};    //arr3 = arr1 * arr2

    //arr2 input elements
    for(short i=0; i<ROW; i++)
    {
        for(short j=0; j<COL; j++)
        {
            cout<<"arr2["<<i<<"]["<<j<<"] = ";
            cin>>twoD_arr2[i][j];
        }
    }
    
    //printing of arr2
    for(short i=0; i<ROW; i++)
    {
        for(short j=0; j<COL; j++)
        {
            cout<<twoD_arr2[i][j]<<" ";
        }
        cout<<"\n";
    }

    //Transpose of arr2
    cout<<"transpose of arr2 is : \n";
    for(short i=0; i<ROW; i++)
    {
        for(short j=0; j<COL; j++)
        {
            cout<<twoD_arr2[j][i]<<" ";
        }
        cout<<"\n";
    }

    //multiplication of arr1 and arr2
    cout<<"Multiplication of arr1 and arr2 is : \n";
    for(short i=0; i<ROW; i++)
    {
        for(short j=0; j<COL; j++)
        {
            twoD_arr3[i][j]= 0;
            for (short k=0; k<NEW_ORDER; k++)
            {
                twoD_arr3[i][j] += twoD_arr1[i][k] * twoD_arr2[k][j];   //observe this : https://en.wikipedia.org/wiki/Matrix_multiplication
                

            }
       
        }
    
    }

    //printing of resultant matrix
     for(short i=0; i<ROW; i++)
    {
        for(short j=0; j<COL; j++)
        {
            cout<<twoD_arr3[i][j]<<" ";
        
        }
    
    cout<<"\n";
    }

    return 0;

}