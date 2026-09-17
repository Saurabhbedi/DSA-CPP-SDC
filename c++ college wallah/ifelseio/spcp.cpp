#include<iostream>
using namespace std;
int main (){
    cout<<"enter the cost price : ";
    int cp;
    cin>>cp;
    cout<<"enter the selling price : ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    else {
        cout<<"Loss = " <<cp-sp;
    }
    if(sp==cp){
        cout<<"no profit no loss";
    }
}