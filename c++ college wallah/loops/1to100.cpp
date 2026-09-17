#include<iostream>
using namespace std;
int main (){
    //to print 1 to 100 counting
    // for(int i=1;i<=100;i++){
    //     cout<<i<<endl;
    // }
    //to print even or odd number
    // for(int i=1;i<=10;i+=2){
    //     cout<<i<<endl;
    // }
    //to print table of 19
    // for(int i=19;i<=190;i+=19){
    //     cout<<i<<endl;
    // } 
    //to print the AP - 1,3,5,7,9,...UPTO N
    // int n;
    // cout<<"enter the n number : ";
    // cin>>n;
    // int a = 1;
    // for(int i=1;i<=n;i++){
    //     cout<<a<<endl;
    //     a = a + 2;
    // }
    // TO PRINT THE GP - 1,2,4,8,16,32 ... UPTO N
    int n;
    cout<<"enter n number";
    cin>>n;
    int a = 2;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a*2;
    }
}