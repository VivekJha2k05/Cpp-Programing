#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    if(marks>=81 && marks<=100)
    {
        cout<<"Your grade is very good";
    }
    else if(marks>=61 && marks<=80)
    {
        cout<<"Your grade is good";
    }
    else if(marks>=41 && marks<=60)
    {
        cout<<"Your grade is average";
    }
    else if(marks<=40)
    {
        cout<<"You are fail in the examination";
    }
}