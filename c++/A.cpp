#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "enter the value of n = ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1 or j==n or i==(1+(n/2))  or i==1 ){
                cout << "* ";
            }
           else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}