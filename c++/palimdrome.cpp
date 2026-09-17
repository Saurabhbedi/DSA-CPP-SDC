#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "enter the value of n = ";
    cin >> n;
    int rev = 0;
    int a = n;
    while(n!=0){
        rev = rev*10 + n%10;
        n=n/10;
    }
    // cout << rev;
    if(rev==a){
        cout<<"true";
    }
    else {
        cout << "false";
    }
    return 0;
}
