#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Program to Find Roots of a Quadratic Equation
    double a,b,c,root1,root2;
    cin>>a>>b>>c;
    int D = (b*b)-4*a*c;

    if(D>0)
    {
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        cout<<"roots are as follows : "<<root1<<"\t"<<root2<<endl;
    }
    else if(D==0)
    {
        root1 = root2 = -b/(2*a);
        cout<<"roots are as follows : "<<root1<<"\t"<<root2<<endl;

    }
    else
    {
       double real_part = -b/(2*a);
       double img_part = sqrt(-D)/(2*a);
       cout<<"root1 is : "<<real_part<<"+("<<img_part<<")i\n";
       cout<<"root2 is : "<<real_part<<"-("<<img_part<<")i\n";


    }



}