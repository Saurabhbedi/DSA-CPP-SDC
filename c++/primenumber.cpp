#include<iostream>
using namespace std;
int main (){
    int n,a=0;
    cout << "enter number = ";
    cin >> n;
    for(int i=2;i<=n-1;i++){
        // if(n%i==0){
        //     a=1;
        //     break;}
        // }
        if(n%i!=0){
            cout<<"prime number";
        }
        else{
            cout<<"composite number";
        }
    }
}