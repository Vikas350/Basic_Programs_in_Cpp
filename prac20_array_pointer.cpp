#include<bits/stdc++.h>
using namespace std;
#define ROW 3
#define COL 3
#define NEW_ORDER 3
int main()
{
    int intArr[10] = {0}; /*initialize all elements to ZERO*/
    double doubleArr[10] = {0}; /*initialize all elements to ZERO*/

    /*Rewrite values in an array using for loop*/
    for(unsigned short idx = 0; idx < 10; idx++)
    {
        intArr[idx] = 5 * idx;
        doubleArr[idx] = -2.0 * idx;
    }
    
    /*get the starting address of array*/
    int *ptrArrInt = intArr; 
    double *ptrArrDouble = doubleArr;
 
    /*print values in an array using for loop*/
    for(unsigned short idx = 0; idx < 10; idx++)
    {
        cout<<"intArr["<<idx<<"] = "<<*(ptrArrInt + idx)<<"\n";
        cout<<"doubleArr["<<idx<<"] = "<<*(ptrArrDouble + idx)<<"\n";
    }

    /*print values in an array using for loop*/
    for(unsigned short idx = 0; idx < 10; idx++)
    {
        cout<<"intArr["<<idx<<"] = "<<*ptrArrInt<<"\n";      // *p print the value at that address
        cout<<"doubleArr["<<idx<<"] = "<<*ptrArrDouble<<"\n";
        ++ptrArrInt;      //address inc by size of data type
        ++ptrArrDouble;
    }

    //print the address of elements of the array 
    for(unsigned short idx = 0; idx < 10; idx++)
    {
        cout<<"Addres of intArr["<<idx<<"] = "<<ptrArrInt<<"\n";          //OR can use : &intArr[idx + i] with type casting "unsigned int" data type
        cout<<"Addres of doubleArr["<<idx<<"] = "<<ptrArrDouble<<"\n";    //OR can use : &doubleArr[idx + i]
        ++ptrArrInt;      //address inc by size of data type
        ++ptrArrDouble;
    }
}