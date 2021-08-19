#include<bits/stdc++.h>
using namespace std;

float LargestElementOfArray(float N[],unsigned int n)
{
    for(int j=1; j<n; j++)
    {
        if(N[0] < N[j])
        {
            N[0] = N[j];
        }
    } 
   
   return N[0];

}

int main()
{
    //Store Numbers and Calculate Average Using Arrays
    unsigned int n; 
    float numbers[n], sum=0, Avg;
    cout<<"enter size of array : ";
    cin>>n;
    
    //input elements of array
    for(int i=0; i<n; i++)
    {
        cout<<"enter the element "<<i+1<< " of array : ";
        cin>>numbers[i];
        sum = sum + numbers[i];
    }

    Avg = sum/n;
    cout<<"average of elements of array = "<<Avg<<endl;

    float Largest;
    Largest = LargestElementOfArray(numbers,n);

    cout<<"largest element of array is : "<<Largest<<endl;

    return 0;
}