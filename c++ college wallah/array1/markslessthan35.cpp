#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    cout<<"Enter the marks of 5 students: ";
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    cout<<"The marks less than 35 are: ";
    for(int i=0;i<5;i++)
    {
        if(marks[i]<35)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
