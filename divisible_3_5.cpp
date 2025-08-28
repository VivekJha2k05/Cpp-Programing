#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%3==0 && n%5==0)
    {
        cout<<"Given number is divisible by both 3 and 5";
    }
    else
    {
        cout<<"Given number is not divisible by both 3 and 5";
    }
}