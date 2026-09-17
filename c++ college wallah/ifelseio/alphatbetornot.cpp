#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"enter the character : ";
    cin>>ch;
    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122 || ascii>=65 && ascii>=97){
        cout<<"the character is alphabet";
    }
    else{
        cout<<"the charcter is not alphabet";
    }
}