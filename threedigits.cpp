#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>99 && n<1000)
    {
        cout<<"Given number is a three digit";
    }
    else
    {
        cout<<"Given number is not a three digit";
    }
}