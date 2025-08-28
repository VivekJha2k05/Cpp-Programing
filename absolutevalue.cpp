#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n<0)
    {
        n=n*(-1);
    }
    cout<<"The absolute value of given integer is:"<<n;
}