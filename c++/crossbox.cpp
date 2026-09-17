#include<iostream>
using namespace std;
int main (){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i==1 or j==1 or i==9 or j==9 or i==j or j==9-i+1 ){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        } 
         cout << "\n";
    }
}