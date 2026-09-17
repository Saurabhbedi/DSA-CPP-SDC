#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            cout<<"The number is divisible by 5 and 3 but not 15";
        }
        else {
            cout<<"not matching condition";
        }
    }
    else {
        cout<<"not matching condition";
    }
}