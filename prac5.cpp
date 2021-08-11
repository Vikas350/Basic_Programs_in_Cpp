#include<iostream>
using namespace std;
int main()
{
    //Program to create a simple calculator
    float n1,n2;
    char operator_t;
    cout<<"enter two values\n";
    cin>>n1>>n2;
    cout<<"enter operator\n";
    cin>>operator_t;

    switch(operator_t)
    {
        case '+':
            cout<<"sum = "<<n1+n2;
            break;

        case '-':
            cout<<"difference = "<<n1-n2;
            break;

        case '*':
            cout<<"product = "<<n1*n2;
            break; 

        case '/':
            cout<<"division = "<<n1/n2;
            break;

        default:
            cout<<"input is wrong bro,please try again and again till not get exact output\n";
    }               

    return 0;
}