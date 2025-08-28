#include<iostream>
using namespace std;
int main()
{
    int cp;
    cout<<"Enter cost price of goods:";
    cin>>cp;
    int sp;
    cout<<"Enter selling price of goods:";
    cin>>sp;
    if(sp>cp)
    {
        cout<<"seller has made profit";
    }
    else if(cp>sp)
    {
        cout<<"seller has made loss";
    }
    else
    {
        cout<<"No profit no loss";
    }
}