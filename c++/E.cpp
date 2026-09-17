#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "enter the value of n = ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 or i==(1+(n/2)) or j==1 or i==n){
            cout<<"* ";
             }
             else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}